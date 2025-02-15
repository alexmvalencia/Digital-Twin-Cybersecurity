#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TwistStamped
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu

class DigitalTwinNode(Node):
    def __init__(self):
        super().__init__('digital_twin_node')

        # MAVROS Subscriptions (Physical Drone Data)
        self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.pose_callback, 10)
        self.create_subscription(Odometry, '/mavros/global_position/local', self.odom_callback, 10)
        self.create_subscription(Imu, '/mavros/imu/data', self.imu_callback, 10)
        self.create_subscription(TwistStamped, '/mavros/local_position/velocity_body', self.velocity_callback, 10)

        # Gazebo Publishers (Simulated Drone)
        self.gazebo_pose_pub = self.create_publisher(PoseStamped, '/gazebo/pose', 10)
        self.gazebo_odom_pub = self.create_publisher(Odometry, '/gazebo/odometry', 10)
        self.gazebo_imu_pub = self.create_publisher(Imu, '/gazebo/imu', 10)
        self.gazebo_vel_pub = self.create_publisher(TwistStamped, '/gazebo/velocity', 10)

    def pose_callback(self, msg):
        self.gazebo_pose_pub.publish(msg)

    def odom_callback(self, msg):
        self.gazebo_odom_pub.publish(msg)

    def imu_callback(self, msg):
        self.gazebo_imu_pub.publish(msg)

    def velocity_callback(self, msg):
        self.gazebo_vel_pub.publish(msg)

def main():
    rclpy.init()
    node = DigitalTwinNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
