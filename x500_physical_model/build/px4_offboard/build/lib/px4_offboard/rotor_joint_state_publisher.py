#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from px4_msgs.msg import ActuatorArmed
import math

class JointStatePublisher(Node):
    def __init__(self):
        super().__init__('joint_state_publisher')

        # Create a publisher for joint states
        self.joint_state_pub = self.create_publisher(JointState, '/joint_states', 10)

        # Subscribe to the /drone/armed topic
        self.armed_sub = self.create_subscription(
            ActuatorArmed,
            '/drone/armed',
            self.armed_callback,
            10
        )

        # Define the joint names
        self.joint_names = ['imu_joint', 'rotor_0_joint', 'rotor_1_joint', 'rotor_2_joint', 'rotor_3_joint']

        # Initialize joint positions
        self.joint_positions = [0.0] * len(self.joint_names)  # All positions start at 0.0

        # Define the sequence of positions for spinning blades
        self.position_steps = [
            0.0,                   # 0
            math.pi / 6,           # π/6
            math.pi / 3,           # π/3
            math.pi / 2,           # π/2
            2 * math.pi / 3,       # 2π/3
            5 * math.pi / 6,       # 5π/6
            math.pi,               # π
            7 * math.pi / 6,       # 7π/6
            4 * math.pi / 3,       # 4π/3
            3 * math.pi / 2,       # 3π/2
            5 * math.pi / 3,       # 5π/3
            11 * math.pi / 6,      # 11π/6
            2 * math.pi            # 2π
        ]
        self.current_step = 0  # Current step in the sequence

        # Armed state
        # self.armed = False
        self.armed = True

        # Publish the joint states at a fixed rate
        self.timer = self.create_timer(0.01, self.publish_joint_states)  # 100 Hz

    def armed_callback(self, msg):
        # Update the armed state
        self.armed = msg.armed
        self.get_logger().info(f'Armed state: {self.armed}')

    def publish_joint_states(self):
        # Only publish if the drone is armed
        if not self.armed:
            return

        # Update the joint positions for spinning blades
        self.joint_positions[1] = self.position_steps[self.current_step]  # Rotor 0
        self.joint_positions[2] = self.position_steps[self.current_step]  # Rotor 1
        self.joint_positions[3] = self.position_steps[self.current_step]  # Rotor 2
        self.joint_positions[4] = self.position_steps[self.current_step]  # Rotor 3

        # Increment the step
        self.current_step = (self.current_step + 1) % len(self.position_steps)

        # Create a JointState message
        joint_state_msg = JointState()
        joint_state_msg.header.stamp = self.get_clock().now().to_msg()
        joint_state_msg.name = self.joint_names
        joint_state_msg.position = self.joint_positions

        # Publish the joint states
        self.joint_state_pub.publish(joint_state_msg)

def main(args=None):
    rclpy.init(args=args)

    # Create and spin the joint state publisher node
    joint_state_publisher = JointStatePublisher()
    rclpy.spin(joint_state_publisher)

    # Clean up
    joint_state_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()