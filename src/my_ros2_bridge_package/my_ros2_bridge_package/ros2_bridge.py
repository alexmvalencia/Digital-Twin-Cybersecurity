#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TwistStamped
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

class DroneBridge(Node):
    def __init__(self):
        super().__init__('ros2_bridge')

        # Define QoS profile (to match MAVROS' reliability settings)
        qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,  # Change to RELIABLE if needed
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )

        # 🚀 Subscribers (Receive data from physical drone via MAVROS)
        self.physical_pose_sub = self.create_subscription(
            PoseStamped, '/mavros/local_position/pose', self.physical_pose_callback, 10)
        
        self.physical_velocity_sub = self.create_subscription(
            TwistStamped, '/mavros/local_position/velocity_body', self.physical_velocity_callback, 10)

        self.physical_imu_sub = self.create_subscription(
            Imu, '/mavros/imu/data', self.physical_imu_callback, 10)

        # 🛰️ Publishers (Send data to the virtual drone in Gazebo)
        self.virtual_pose_pub = self.create_publisher(
            PoseStamped, '/gz/px4/local_position', 10)
        
        self.virtual_velocity_pub = self.create_publisher(
            TwistStamped, '/gz/px4/velocity', 10)

        # 🛑 Virtual → Physical (Simulated drone data sent to physical)
        self.virtual_pose_sub = self.create_subscription(
            PoseStamped, '/gz/px4/local_position', self.virtual_pose_callback, 10)
        
        self.physical_setpoint_pub = self.create_publisher(
            PoseStamped, '/mavros/setpoint_position/local', 10)

        self.get_logger().info("🚀 ROS2 Bridge Node Started: Physical ↔ Virtual Drone")

    def physical_pose_callback(self, msg):
        """Forward physical drone's position to the simulated drone."""
        self.virtual_pose_pub.publish(msg)
        self.get_logger().info("📡 Physical → Virtual: Pose Forwarded")

    def physical_velocity_callback(self, msg):
        """Forward physical drone's velocity to the simulated drone."""
        self.virtual_velocity_pub.publish(msg)
        self.get_logger().info("📡 Physical → Virtual: Velocity Forwarded")

    def physical_imu_callback(self, msg):
        """Monitor IMU data from physical drone."""
        self.get_logger().info("📡 Physical IMU: Received")

    def virtual_pose_callback(self, msg):
        """Forward virtual drone's position to the physical drone."""
        self.physical_setpoint_pub.publish(msg)
        self.get_logger().info("📡 Virtual → Physical: Position Forwarded")


def main(args=None):
    rclpy.init(args=args)
    node = DroneBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
