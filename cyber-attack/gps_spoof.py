#!/usr/bin/env python3

import asyncio
from mavsdk import System
from mavsdk.offboard import PositionNedYaw

async def spoof_gps(target_lat, target_lon, target_alt):
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
    
    # Start Offboard mode to control position
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -target_alt, 0.0))
    await drone.offboard.start()

    while True:
        await drone.offboard.set_position_ned(PositionNedYaw(
            target_lat, target_lon, -target_alt, 0.0
        ))
        print(f"Spoofing GPS: {target_lat}, {target_lon}, {target_alt}")
        await asyncio.sleep(1)

if __name__ == "__main__":
    target_lat = 37.7749  # Fake Latitude (San Francisco)
    target_lon = -122.4194  # Fake Longitude
    target_alt = 50.0  # Fake Altitude (meters)
    asyncio.run(spoof_gps(target_lat, target_lon, target_alt))
