#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
import tf2_ros
import geometry_msgs.msg

class TFPublisher(Node):
    def __init__(self):
        super().__init__('tf_publisher')

        # Create a TF broadcaster
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        # Subscribe to the vehicle pose topic
        self.pose_sub = self.create_subscription(
            PoseStamped,
            '/px4_visualizer/vehicle_pose',
            self.pose_callback,
            10
        )

        self.get_logger().info('TF publisher Node has been started')

    def pose_callback(self, msg):
        # Create a transform message
        transform = geometry_msgs.msg.TransformStamped()
        transform.header.stamp = self.get_clock().now().to_msg()
        transform.header.frame_id = 'map'  # Parent frame
        transform.child_frame_id = 'base_link'  # Child frame

        # Set the translation (position)
        transform.transform.translation.x = msg.pose.position.x
        transform.transform.translation.y = msg.pose.position.y
        transform.transform.translation.z = msg.pose.position.z

        # Set the rotation (orientation)
        transform.transform.rotation = msg.pose.orientation

        # Publish the transform
        self.tf_broadcaster.sendTransform(transform)

def main(args=None):
    rclpy.init(args=args)

    # Create and spin the TF publisher node
    tf_publisher = TFPublisher()
    rclpy.spin(tf_publisher)

    # Clean up
    tf_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()