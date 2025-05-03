# Digital Twin Cybersecurity for PX4 Drone

ROS2 Packages for simulating the digital twin for Holybro PX4 Quad Drone for cybersecurity attacks and predictive analysis.

### Requirements
- Ubuntu 24.04 (Noble Numbat)
- ROS2 Jazzy
- Gazebo Harmonic

![px4 drone rviz](./images/px4_drone_rviz.png)
### Digital Twin Behavior (Simulation)
![Digital Twin](./images/DigitalTwinGIF.GIF)

### Physical Drone Reaction (Real Flight)
![Physical Drone](./images/PhysicalGIF.gif)


## Usage
To visualize the drone in rviz without the connection
```# Digital Twin Cybersecurity for PX4 Drone

ROS2 Packages for simulating the digital twin of a Holybro PX4 Quad Drone for cybersecurity attack testing and predictive analysis.

### Requirements
- Ubuntu 24.04 (Noble Numbat)
- ROS2 Jazzy Jalisco
- Gazebo Harmonic
- QGroundControl

### Clone Dependencies
Before building the workspace, clone the following required packages:

```bash
# Navigate to your ROS2 workspace src directory
cd ~/ros2_ws/src

# PX4-related packages
git clone https://github.com/PX4/px4_msgs.git
git clone https://github.com/PX4/px4_ros_com.git
git clone https://github.com/PX4/px4_offboard.git

# QGroundControl (run this outside of the ROS2 workspace if just using the GUI)
git clone https://github.com/mavlink/qgroundcontrol.git

source install/setup.bash
ros2 launch x500_drone_description x500_drone_display.launch.py
```
