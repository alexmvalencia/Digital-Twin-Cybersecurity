#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from pymavlink import mavutil

class PX4DigitalTwin(Node):
    def __init__(self):
        super().__init__('px4_digital_twin')

        # MAVLink connection to the physical drone (adjust port)
        self.physical_drone = mavutil.mavlink_connection('/dev/serial/by-id/usb-FTDI_FT231X_USB_UART_D30JCTDI-if00-port0', baud=57600)

        # ROS2 publisher for the digital twin position
        self.virtual_position_pub = self.create_publisher(PoseStamped, '/twin/local_position/pose', 10)

        # Timer to sync every 0.1s (10Hz)
        self.timer = self.create_timer(0.1, self.sync_digital_twin)

    def sync_digital_twin(self):
        """ Reads physical drone position and updates virtual drone in Gazebo. """
        try:
            # Get telemetry from physical drone
            self.physical_drone.recv_match(type='GLOBAL_POSITION_INT', blocking=True)
            pos = self.physical_drone.messages['GLOBAL_POSITION_INT']

            # Convert to meters
            x = pos.lat / 1e7
            y = pos.lon / 1e7
            z = pos.alt / 1000.0

            # Publish to virtual drone
            twin_pose = PoseStamped()
            twin_pose.header.stamp = self.get_clock().now().to_msg()
            twin_pose.header.frame_id = "map"
            twin_pose.pose.position.x = x
            twin_pose.pose.position.y = y
            twin_pose.pose.position.z = z

            self.virtual_position_pub.publish(twin_pose)
            self.get_logger().info(f"Updated virtual drone: x={x}, y={y}, z={z}")

        except Exception as e:
            self.get_logger().error(f"Failed to sync: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = PX4DigitalTwin()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
