from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mavros',
            executable='px4',
            name='px4_sim',
            namespace='px4_sim',
            output='screen',
            parameters=[{
                'fcu_url': 'udp://:14550@127.0.0.1:14550'
            }]
        ),
        Node(
            package='mavros',
            executable='px4',
            name='px4_real',
            namespace='px4_real',
            output='screen',
            parameters=[{
                'fcu_url': 'serial:///dev/serial/by-id/usb-FTDI_FT231X_USB_UART_D30JCTDI-if00-port0:57600'
            }]
        ),
        Node(
            package='my_ros2_bridge_package',
            executable='ros2_bridge',
            name='ros2_bridge',
            output='screen'
        ),
    ])
