#!/usr/bin/env python3

import asyncio
import csv
import os
from datetime import datetime
from mavsdk import System

# Define the log directory path relative to the script's location
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
LOG_DIR = os.path.join(BASE_DIR, "..", "flight-real-logs")
LOG_FILE = os.path.join(LOG_DIR, "original_path.csv")

# Ensure the log directory exists
os.makedirs(LOG_DIR, exist_ok=True)

async def record_original_path():
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone connected!")
            break

    print("Recording original drone telemetry...")

    # Check if the file exists to avoid re-writing headers
    file_exists = os.path.isfile(LOG_FILE)

    with open(LOG_FILE, "a", newline="") as log_file:
        log_writer = csv.writer(log_file)

        if not file_exists:
            log_writer.writerow(["Timestamp", "Latitude", "Longitude", "Altitude",
                                 "Spoofed Latitude", "Spoofed Longitude", "Spoofed Altitude",
                                 "Velocity North", "Velocity East", "Velocity Down", "is_spoofed"])

        while True:
            async for position in drone.telemetry.position():
                async for velocity in drone.telemetry.velocity_ned():
                    log_writer.writerow([
                        datetime.now().isoformat(),
                        position.latitude_deg, position.longitude_deg, position.relative_altitude_m,
                        "N/A", "N/A", "N/A",  # No spoofing, so N/A
                        velocity.north_m_s, velocity.east_m_s, velocity.down_m_s,
                        0  # is_spoofed = 0
                    ])
                    log_file.flush()
                    print(f"Logged: {position.latitude_deg}, {position.longitude_deg}, {position.relative_altitude_m}, is_spoofed: 0")
                    break
            await asyncio.sleep(1)

async def main():
    await record_original_path()

if __name__ == "__main__":
    asyncio.run(main())
