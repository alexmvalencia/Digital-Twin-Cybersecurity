# Digital Twin Cybersecurity for PX4 Drone

This repository contains ROS2 packages and simulation tools for developing a **cyber-resilient digital twin** of the Holybro PX4 Quad Drone. The system enables secure, real-time testing of cyber-physical attacks—particularly **GPS spoofing**—while integrating both virtual and physical drone telemetry for predictive analysis.

---

## 🛠 Requirements

- Ubuntu 24.04 (Noble Numbat)  
- ROS2 Jazzy Jalisco  
- Gazebo Harmonic
- PX4 Autopilot Firmware 
- QGroundControl
- PX4 ROS2 packages:
  - `px4_msgs`
  - `px4_ros_com`
  - `px4_offboard`


---

## 🧠 Digital Twin Behavior (Simulation)

![Digital Twin](./images/DigitalTwinGIF.GIF)

---

## 🚁 Physical Drone Reaction (Real Flight)

<img src="./images/PhysicalGIF.gif" width="600"/>

---

## 🚀 Usage

To visualize the PX4 drone model in **RViz** without connecting to the physical drone:

```bash
source install/setup.bash
ros2 launch x500_drone_description x500_drone_display.launch.py
