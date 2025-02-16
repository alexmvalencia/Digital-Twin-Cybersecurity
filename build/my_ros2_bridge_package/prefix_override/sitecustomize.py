import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ajval/Digital-Twin-Cybersecurity/install/my_ros2_bridge_package'
