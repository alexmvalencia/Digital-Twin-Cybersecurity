#!/usr/bin/env python3

import joblib
import numpy as np
import asyncio
import threading
import tkinter as tk
from mavsdk import System
from mavsdk.offboard import PositionNedYaw
import mavsdk

# Load the trained GPS spoofing model
gps_model = joblib.load("gps_spoofing_prediction_model.pkl")

# Initialize GUI
class GPSSpoofGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("GPS Spoofing Detector")
        self.root.geometry("400x200")
        self.root.configure(bg="white")

        self.label = tk.Label(root, text="Monitoring GPS...", font=("Arial", 16), bg="white", fg="black")
        self.label.pack(expand=True, fill="both")

    def update_status(self, is_spoofed):
        if is_spoofed:
            self.label.config(text="⚠️ Predicted Spoof Detected! Hovering...", fg="red", bg="yellow")
        else:
            self.label.config(text="✅ GPS Signal Normal", fg="green", bg="white")

# Fetch GPS data and predict spoofing
async def monitor_gps(gui):
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print("✅ Connected to drone. Monitoring GPS data...")

    async for gps in drone.telemetry.position():
        async for velocity in drone.telemetry.velocity_ned():
            latitude = gps.latitude_deg
            longitude = gps.longitude_deg
            altitude = gps.relative_altitude_m

            velocity_north = velocity.north_m_s
            velocity_east = velocity.east_m_s
            velocity_down = velocity.down_m_s

            # Convert to numpy array for model prediction
            gps_data = np.array([[latitude, longitude, altitude, velocity_north, velocity_east, velocity_down]])
            prediction = gps_model.predict(gps_data.reshape(1, -1))

            is_spoofed = prediction[0] == 1
            gui.root.after(0, gui.update_status, is_spoofed)

            if is_spoofed:
                print("⚠️ GPS Spoofing Detected! Stopping movement and holding position.")

                # Cancel any ongoing mission to prevent navigation to spoofed coordinates
                await drone.mission.clear_mission()

                # Get the drone’s current NED position
                async for telemetry in drone.telemetry.position_velocity_ned():
                    current_ned = telemetry.position
                    break  # Get only the first value

                current_north = current_ned.north_m
                current_east = current_ned.east_m
                current_down = current_ned.down_m  # Negative altitude

                # Switch to Offboard mode to hold the current position
                await drone.offboard.set_position_ned(PositionNedYaw(current_north, current_east, current_down, 0.0))
                await drone.offboard.start()

                while True:
                    # Continuously update to maintain position
                    await drone.offboard.set_position_ned(PositionNedYaw(current_north, current_east, current_down, 0.0))
                    await asyncio.sleep(1)

# Run the async function in a separate thread
def run_asyncio_loop(loop):
    asyncio.set_event_loop(loop)
    loop.run_until_complete(monitor_gps(app))

# Initialize GUI and start monitoring
if __name__ == "__main__":
    root = tk.Tk()
    app = GPSSpoofGUI(root)

    loop = asyncio.new_event_loop()
    thread = threading.Thread(target=run_asyncio_loop, args=(loop,), daemon=True)
    thread.start()

    root.mainloop()
