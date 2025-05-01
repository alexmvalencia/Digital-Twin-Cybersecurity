#!/usr/bin/env python3

import joblib
import numpy as np
import asyncio
import threading
import tkinter as tk
from mavsdk import System
from mavsdk.offboard import PositionNedYaw
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# Load spoof detection model
gps_model = joblib.load("gps_spoofing_prediction_model.pkl")

# Shared drone instance and event loop across threads
shared_drone = None
event_loop = None  # <-- Added global event loop

# GUI Class
class GPSSpoofGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("GPS Spoofing Detector")

        screen_width = root.winfo_screenwidth()
        screen_height = root.winfo_screenheight()

        # Set window to take up right half of screen width
        window_width = screen_width // 2
        window_height = 200

        x = screen_width // 2
        y = screen_height - window_height - 80

        self.root.geometry(f"{window_width}x{window_height}+{x}+{y}")
        self.root.configure(bg="white")
        self.root.resizable(False, False)

        self.label = tk.Label(root, text="Monitoring GPS...", font=("Arial", 12), bg="white", fg="black")
        self.label.pack(pady=10, fill="both")

        self.hold_button = tk.Button(root, text="🚁 Holding Position", state="disabled", bg="lightgray", font=("Arial", 11))
        self.hold_button.pack(pady=5)

        self.rtl_button = tk.Button(root, text="🏠 Return to Home", bg="orange", fg="black", font=("Arial", 11), command=self.command_return_home)
        self.rtl_button.pack(pady=5)

    def update_status(self, is_spoofed):
        if is_spoofed:
            self.label.config(text="⚠️ Predicted Spoof Detected! Hovering...", fg="red", bg="yellow")
            self.hold_button.config(state="normal", bg="red", fg="white")
        else:
            self.label.config(text="✅ GPS Signal Normal", fg="green", bg="white")
            self.hold_button.config(state="disabled", bg="lightgray", fg="black")

    def command_return_home(self):
        print("🏠 Return to Home button pressed.")
        if event_loop:
            asyncio.run_coroutine_threadsafe(return_to_home(), event_loop)
            self.rtl_button.config(text="Returning...", bg="green", fg="white")  # Optional visual feedback
        else:
            print("❌ Event loop not initialized yet.")

# ROS2 Node for visualization
class SpoofingNode(Node):
    def __init__(self):
        super().__init__('gps_spoof_detector')
        self.publisher_ = self.create_publisher(String, 'spoofing_status', 10)

    def publish_status(self, status: str):
        msg = String()
        msg.data = status
        self.publisher_.publish(msg)

# Async function to return drone to launch/home
async def return_to_home():
    global shared_drone
    if shared_drone:
        print("🚁 Sending Return to Launch command...")
        await shared_drone.action.return_to_launch()
    else:
        print("❌ Drone not connected yet.")

# Async GPS monitoring function
async def monitor_gps(gui, ros_node):
    global shared_drone
    drone = System()
    await drone.connect(system_address="udp://:14540")
    shared_drone = drone
    print("✅ Connected to drone. Monitoring GPS data...")

    async for gps in drone.telemetry.position():
        async for velocity in drone.telemetry.velocity_ned():
            latitude = gps.latitude_deg
            longitude = gps.longitude_deg
            altitude = gps.relative_altitude_m

            velocity_north = velocity.north_m_s
            velocity_east = velocity.east_m_s
            velocity_down = velocity.down_m_s

            # Predict spoofing
            gps_data = np.array([[latitude, longitude, altitude, velocity_north, velocity_east, velocity_down]])
            prediction = gps_model.predict(gps_data.reshape(1, -1))
            is_spoofed = prediction[0] == 1

            # Update GUI safely
            gui.root.after(0, gui.update_status, is_spoofed)

            # Publish ROS2 message
            ros_node.publish_status("spoofed" if is_spoofed else "normal")

            if is_spoofed:
                print("⚠️ GPS Spoofing Detected! Holding current position.")
                await drone.mission.clear_mission()
                async for telemetry in drone.telemetry.position_velocity_ned():
                    current_ned = telemetry.position
                    break

                current_north = current_ned.north_m
                current_east = current_ned.east_m
                current_down = current_ned.down_m

                await drone.offboard.set_position_ned(PositionNedYaw(current_north, current_east, current_down, 0.0))
                await drone.offboard.start()

                # Keep drone hovering at current position
                while True:
                    await drone.offboard.set_position_ned(PositionNedYaw(current_north, current_east, current_down, 0.0))
                    await asyncio.sleep(1)

# Thread to run asyncio event loop
def run_asyncio_loop(gui):
    global event_loop
    rclpy.init()
    node = SpoofingNode()
    event_loop = asyncio.new_event_loop()  # <-- Save event loop
    asyncio.set_event_loop(event_loop)
    event_loop.run_until_complete(monitor_gps(gui, node))
    rclpy.shutdown()

# Main
if __name__ == "__main__":
    root = tk.Tk()
    gui = GPSSpoofGUI(root)

    # Run async MAVSDK logic in background
    thread = threading.Thread(target=run_asyncio_loop, args=(gui,), daemon=True)
    thread.start()

    # Run GUI in main thread
    root.mainloop()
