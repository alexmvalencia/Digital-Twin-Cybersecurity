# Low-Level Diagram for Drone Cyber-Physical System

## Overview
This document outlines the low-level diagram for the real-world drone and digital representation

![image](https://github.com/user-attachments/assets/6eeb7749-d235-4ac2-bad8-7c9391315703)

## Purpose of the Low-Level Diagram
The low-level diagram provides a more detailed breakdown including:
- **Local Machine Communication:** The Holybro X500 V2 PX4 drone and sensors, local machines used, IoT Gateway, and Simulations. This also includes the Ubuntu VM machine used to communicate between Gazebo (for simulation testing, drone simulation, sensor modeling, etc). As well as Python for the scripting, and lastly PyBullet/SimPy for calculations in real-time
- **Real-Time Process and Development:** The tool used to collect data in real-time looking at various things like network latency, CPU usage, and network traffic monitoring. Moreover, this looks at the movement, time series, and navigation of the drone
- **Digital Twin Representation:** The communication between the real-world sensor data and the physical model data. It also includes an informative diagram on python libraries various tools used for data analysis like Wireshark and Python libraries
