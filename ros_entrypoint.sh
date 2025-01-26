#!/bin/bash
set -e

# Source ROS 2 jazzy setup files
source /opt/ros/jazzy/setup.bash
#source /ros_ws/install/setup.bash

# Execute the command passed to the container
exec "$@"
