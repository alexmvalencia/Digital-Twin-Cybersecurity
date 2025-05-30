# Digital Twin Cybersecurity for PX4 Drone

This repository contains ROS2 packages and simulation tools for developing a **cyber-resilient digital twin** of the Holybro PX4 Quad Drone. The system enables secure, real-time testing of cyber-physical attacks—particularly **GPS spoofing**—while integrating both virtual and physical drone telemetry for predictive analysis.

---

## 🛠 Requirements

- Ubuntu 24.04 (Noble Numbat)  
- ROS2 Jazzy Jalisco  
- Gazebo Harmonic
- PX4 Autopilot Firmware 
- QGroundControl
- MICRO XRCE-DDS Agent
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

To visualize the PX4 drone model

Start QGroundControl
```bash
./QGroundControl.AppImage
```

Start PX4 Physical Drone
```bash
cd PX4-Autopilot
make px4_sitl gz_X500
```
Start MicroXRCE Agent on PX4 Drone over UDP on port 8888
```bash
MICROXRCEAgent udp4 -p 8888
```
Connect to the drone in QGC to simulation drone over port 14550
Setup a flight path in QGC and start flight

Go into cyber-attack directory
```bash
cd Digital-Cybersecurity
cd cyber-attack
```

Choose coordinates in script to change spoof latitude, longitude, and altitude
![image](https://github.com/user-attachments/assets/a671411e-d7fe-4b0a-8333-4d1f570ee1ee)

Run digital twin predictive model
```bash
cd Digital-Cybersecurity/predictive-ml
source ~/venv/bin/activate
cd Digital-Cybersecurity/predictive-ml
./gps_spoof_prediction_model.py
```

```bash
cd Digital-Cybersecurity/x500_model
. install/setup.bash
ros2 launch  px4_offbaord visualize.launch.py
```

While drone is in flight, run spoof attack as executable
```bash
Digital-Cybersecurity/cyber-attack/gps_spoof.py
```

Drone will be spoofed and predict attack
The drone will hover in response
Complete!

## 📚 References & Dependencies

The following open-source tools and frameworks were essential to the development of this digital twin cybersecurity project:

- **[Ubuntu 24.04 (Noble Numbat)](https://releases.ubuntu.com/24.04/)** – Base operating system for the ROS2/Gazebo simulation environment.  
- **[ROS2 Jazzy Jalisco](https://docs.ros.org/en/jazzy/)** – The robotics middleware framework used for simulation and drone communication.  
- **[Gazebo Harmonic](https://gazebosim.org/docs/harmonic/overview)** – 3D simulation environment for modeling and testing drone behaviors.  
- **[QGroundControl](https://github.com/mavlink/qgroundcontrol)** – GUI-based ground control station for managing drone flight plans and telemetry.  
- **[PX4 Autopilot](https://github.com/PX4/PX4-Autopilot)** – Open-source flight control software stack for autonomous UAV operation.  
- PX4 ROS2 Integration Packages:
  - **[`px4_msgs`](https://github.com/PX4/px4_msgs)** – ROS2 message definitions used in PX4.
  - **[`px4_ros_com`](https://github.com/PX4/px4_ros_com)** – Communication interface between PX4 and ROS2.
  - **[`px4_offboard`](https://github.com/PX4/px4_offboard)** – Tools for executing offboard control through ROS2.
- **[MICRO XRCE-DDS Agent](https://github.com/eProsima/Micro-XRCE-DDS-Agent)** – Lightweight DDS middleware used to enable efficient communication between PX4 firmware and ROS2 over resource-constrained links.

These tools collectively supported the development, simulation, visualization, and real-time spoof detection capabilities of the digital twin framework.
