#!/usr/bin/env python3

import asyncio
import random
import csv
from datetime import datetime
from mavsdk import System
from mavsdk.offboard import PositionNedYaw

# Number of tests
NUM_TESTS = 100
LOG_FILE = "gps_spoof_logs.csv"

async def spoof_gps(target_lat, target_lon, target_alt, test_id):
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print(f"Test {test_id}: Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print(f"Test {test_id}: Drone connected!")
            break

    async for position in drone.telemetry.position():
        print(f"Test {test_id}: Initial Position - {position.latitude_deg}, {position.longitude_deg}, {position.relative_altitude_m}")
        break

    print(f"Test {test_id}: Waiting for drone to be airborne...")
    async for position in drone.telemetry.position():
        if position.relative_altitude_m > 1.0:
            print(f"Test {test_id}: Drone is airborne, starting GPS spoofing...")
            break

    # Start Offboard mode to control position
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -target_alt, 0.0))
    await drone.offboard.start()

    with open(LOG_FILE, "a", newline="") as log_file:
        log_writer = csv.writer(log_file)
        log_writer.writerow(["Test ID", "Timestamp", "Real Lat", "Real Lon", "Real Alt", "Spoofed Lat", "Spoofed Lon", "Spoofed Alt"])

        for _ in range(10):  # Run each test for 10 seconds
            async for position in drone.telemetry.position():
                log_writer.writerow([
                    test_id, datetime.now().isoformat(),
                    position.latitude_deg, position.longitude_deg, position.relative_altitude_m,
                    target_lat, target_lon, target_alt
                ])
                break
            await drone.offboard.set_position_ned(PositionNedYaw(target_lat, target_lon, -target_alt, 0.0))
            print(f"Test {test_id}: Spoofing GPS -> {target_lat}, {target_lon}, {target_alt}")
            await asyncio.sleep(1)

async def run_tests():
    for i in range(1, NUM_TESTS + 1):
        target_lat = 37.7749 + random.uniform(-0.01, 0.01)  # Small perturbation around SF
        target_lon = -122.4194 + random.uniform(-0.01, 0.01)
        target_alt = random.uniform(10, 100)  # Random altitude
        await spoof_gps(target_lat, target_lon, target_alt, i)

if __name__ == "__main__":
    asyncio.run(run_tests())
