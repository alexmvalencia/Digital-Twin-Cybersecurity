#!/usr/bin/env python3

import asyncio
import csv
import os
from datetime import datetime
from mavsdk import System
from mavsdk.offboard import PositionNedYaw

# Define the log directory path relative to the script's location
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
LOG_DIR = os.path.join(BASE_DIR, "..", "flight-spoof-logs")
LOG_FILE = os.path.join(LOG_DIR, "drone_straight_path_log_1.csv")

# Ensure the log directory exists
os.makedirs(LOG_DIR, exist_ok=True)

# Spoofed GPS coordinates
SPOOFED_LAT = 37.7749  # Fake Latitude (San Francisco)
SPOOFED_LON = -122.4194  # Fake Longitude
SPOOFED_ALT = 50.0  # Fake Altitude (meters)

# Spoofing trigger distance (meters)
SPOOF_DISTANCE = 5.0  # Start spoofing after 5 meters

# Global flag to track if spoofing is active
is_spoofed = False

async def track_drone():
    global is_spoofed  # Access global spoofing flag
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone connected!")
            break

    print("Arming drone...")
    await drone.action.arm()

    print("Starting offboard mode...")
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -2.0, 0.0))
    await drone.offboard.start()
    
    print("Moving forward by 10 meters...")
    await drone.offboard.set_position_ned(PositionNedYaw(10.0, 0.0, -2.0, 0.0))
    await asyncio.sleep(3)
    
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
                    
                    # Log with correct spoofing state
                    log_writer.writerow([
                        datetime.now().isoformat(),
                        position.latitude_deg, position.longitude_deg, position.relative_altitude_m,
                        SPOOFED_LAT if is_spoofed else "N/A", 
                        SPOOFED_LON if is_spoofed else "N/A", 
                        SPOOFED_ALT if is_spoofed else "N/A", 
                        velocity.north_m_s, velocity.east_m_s, velocity.down_m_s, 
                        is_spoofed  # Explicitly False until spoofing condition is met
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
    
    print("Waiting for drone to be airborne...")
    async for position in drone.telemetry.position():
        if position.relative_altitude_m > 1.0:
            print("Drone is airborne, starting GPS spoofing...")
            break
    
    while True:
        async for position in drone.telemetry.position():
            
            if position.latitude_deg >= SPOOF_DISTANCE:
                is_spoofed = True
                await drone.offboard.set_position_ned(PositionNedYaw(SPOOFED_LAT, SPOOFED_LON, -SPOOFED_ALT, 0.0))
                print(f"Spoofing GPS: {SPOOFED_LAT}, {SPOOFED_LON}, {SPOOFED_ALT}")
            else:
                is_spoofed = False  # Ensure it resets when not in spoofing range

            await asyncio.sleep(1)

async def main():
    await asyncio.gather(track_drone(), spoof_gps())

if __name__ == "__main__":
    asyncio.run(main())
