#!/usr/bin/env python3

import asyncio
import csv
import os
from datetime import datetime
from mavsdk import System
from mavsdk.offboard import PositionNedYaw

# Define the log directory path relative to the script's location
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
LOG_DIR = os.path.join(BASE_DIR, ".."   , "flight-spoof-logs")
LOG_FILE = os.path.join(LOG_DIR, "150.csv")

# Ensure the log directory exists
os.makedirs(LOG_DIR, exist_ok=True)

# Spoofed GPS coordinates
SPOOFED_LAT = 126.487 # Fake Latitude (San Francisco)
SPOOFED_LON = 197.853 # Fake Longitude
SPOOFED_ALT = 170.452 # Fake Altitude (meters)

# Global flag to track if spoofing is active
is_spoofed = 0  # Use 0 for False and 1 for True

async def track_drone():
    global is_spoofed  # Access global spoofing flag
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone connected!")
            break
    
    print("Tracking drone telemetry...")

    # Check if the file exists to avoid re-writing headers
    file_exists = os.path.isfile(LOG_FILE)

    with open(LOG_FILE, "a", newline="") as log_file:
        log_writer = csv.writer(log_file)
        
        if not file_exists:  # Only write headers if file does not exist
            log_writer.writerow(["Timestamp", "Latitude", "Longitude", "Altitude", 
                                 "Spoofed Latitude", "Spoofed Longitude", "Spoofed Altitude", 
                                 "Velocity North", "Velocity East", "Velocity Down", "is_spoofed"])

        while True:
            async for position in drone.telemetry.position():
                async for velocity in drone.telemetry.velocity_ned():
                    log_writer.writerow([
                        datetime.now().isoformat(),
                        position.latitude_deg, position.longitude_deg, position.relative_altitude_m,
                        SPOOFED_LAT if is_spoofed == 1 else "N/A", 
                        SPOOFED_LON if is_spoofed == 1 else "N/A", 
                        SPOOFED_ALT if is_spoofed == 1 else "N/A", 
                        velocity.north_m_s, velocity.east_m_s, velocity.down_m_s, 
                        is_spoofed  # 0 or 1 to represent the spoofing state
                    ])
                    log_file.flush()
                    print(f"Logged: {position.latitude_deg}, {position.longitude_deg}, {position.relative_altitude_m}, is_spoofed: {is_spoofed}")
                    break
            await asyncio.sleep(1)  # Log data every second

async def spoof_gps():
    global is_spoofed  # Access global spoofing flag
    drone = System()
    await drone.connect(system_address="udp://:14540")
    
    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone connected!")
            break
    
    await asyncio.sleep(3)  # Wait 2 seconds before spoofing

    print("Starting GPS spoofing...")
    
    while True:
        await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -SPOOFED_ALT, 0.0))
        await drone.offboard.start()
        await drone.offboard.set_position_ned(PositionNedYaw(SPOOFED_LAT, SPOOFED_LON, -SPOOFED_ALT, 0.0))
        is_spoofed = 1  # Enable spoofing
        print(f"Spoofing GPS: {SPOOFED_LAT}, {SPOOFED_LON}, {SPOOFED_ALT}")
        await asyncio.sleep(1)

async def main():
    await asyncio.gather(track_drone(), spoof_gps())

if __name__ == "__main__":
    asyncio.run(main())
