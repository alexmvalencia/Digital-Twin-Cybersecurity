#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from mavros_msgs.msg import State
from geometry_msgs.msg import PoseStamped

class PX4SyncNode(Node):
    def __init__(self):
        super().__init__('px4_sync_node')

        # Define a QoS profile to match MAVROS best-effort reliability
        qos_profile_sensor_data = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10
        )

        # Subscribers: Listen to MAVROS state and pose topics from the real drone
        self.sub_real_state = self.create_subscription(
            State, '/mavros/state', self.real_state_callback, qos_profile_sensor_data)

        self.sub_real_pose = self.create_subscription(
            PoseStamped, '/mavros/local_position/pose', self.real_pose_callback, qos_profile_sensor_data)

        # Publishers: Publish to Gazebo simulated drone
        self.pub_sim_pose = self.create_publisher(
            PoseStamped, '/mavros/setpoint_position/local', 10)

        self.real_pose = None  # Initialize as None to prevent errors
        self.timer = self.create_timer(0.1, self.sync_drones)

    def real_state_callback(self, msg):
        self.get_logger().info(f"Real Drone Mode: {msg.mode}, Armed: {msg.armed}")

    def real_pose_callback(self, msg):
        self.real_pose = msg  # Store latest real drone position

    def sync_drones(self):
        if self.real_pose:
            sim_pose = PoseStamped()  # Create a new PoseStamped object
            sim_pose.header.stamp = self.get_clock().now().to_msg()
            sim_pose.header.frame_id = "world"  # Adjust frame ID if needed
            sim_pose.pose = self.real_pose.pose  # Copy only the pose
            
            self.pub_sim_pose.publish(sim_pose)
            self.get_logger().info("Syncing Physical → Virtual Drone Position")

def main(args=None):
    rclpy.init(args=args)
    node = PX4SyncNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
