#!/bin/bash
set -e

# Source ROS 2 setup files
source /opt/ros/foxy/setup.bash
source /ros_ws/install/setup.bash

# Execute the command passed to the container
exec "$@"
