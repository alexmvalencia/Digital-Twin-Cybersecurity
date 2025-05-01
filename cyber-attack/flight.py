#!/usr/bin/env python3

import asyncio
from mavsdk import System
from mavsdk.offboard import OffboardError, PositionNedYaw

async def takeoff_hover_land():
    drone = System()
    await drone.connect(system_address="udp://:14540")

    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone connected!")
            break

    # Wait until position estimates are OK
    print("Waiting for home and global position...")
    async for health in drone.telemetry.health():
        if health.is_global_position_ok and health.is_home_position_ok:
            print("Position OK")
            break

    print("Arming (if not already)...")
    await drone.action.arm()

    print("Sending initial zero setpoint...")
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, 0.0, 0.0))

    try:
        await drone.offboard.start()
        print("Offboard started")
    except OffboardError as e:
        print(f"Offboard start failed: {e._result.result}")
        return

    print("Taking off to 0.3 meters...")
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -0.3, 0.0))
    await asyncio.sleep(0.5)  # Hover for 0.5 sec

    print("Descending to ground...")
    await drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, 0.0, 0.0))
    await asyncio.sleep(2)  # Time to descend

    print("Stopping offboard...")
    await drone.offboard.stop()

    await asyncio.sleep(1)  # Let it settle before disarming

    print("Disarming...")
    await drone.action.disarm()

    print("Mission complete ✅")

if __name__ == "__main__":
    asyncio.run(takeoff_hover_land())
