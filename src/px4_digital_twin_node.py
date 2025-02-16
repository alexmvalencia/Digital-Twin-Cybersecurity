#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from mavros_msgs.msg import State
from geometry_msgs.msg import PoseStamped
import time

class PX4SyncNode(Node):
    def __init__(self):
        super().__init__('px4_sync_node')

        # Subscribers: Listen to MAVROS state and pose topics from the real drone
        self.sub_real_state = self.create_subscription(State, '/mavros/state', self.real_state_callback, 10)
        self.sub_real_pose = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.real_pose_callback, 10)

        # Publishers: Publish to Gazebo simulated drone
        self.pub_sim_pose = self.create_publisher(PoseStamped, '/gz_x500/mavros/setpoint_position/local', 10)

        self.real_pose = PoseStamped()
        self.sim_pose = PoseStamped()

        self.timer = self.create_timer(0.1, self.sync_drones)

    def real_state_callback(self, msg):
        self.get_logger().info(f"Real Drone Mode: {msg.mode}, Armed: {msg.armed}")

    def real_pose_callback(self, msg):
        self.real_pose = msg

    def sync_drones(self):
        if self.real_pose is not None:
            # Copy real drone position to simulated drone
            self.sim_pose = self.real_pose
            self.pub_sim_pose.publish(self.sim_pose)
            self.get_logger().info("Syncing Physical → Virtual Drone Position")

def main(args=None):
    rclpy.init(args=args)
    node = PX4SyncNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
