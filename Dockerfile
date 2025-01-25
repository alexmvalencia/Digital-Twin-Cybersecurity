# Use Ubuntu 24.04 as the base image
FROM ubuntu:24.04

# Use ROS Foxy
FROM osrf/ros:foxy-desktop

# Set environment variables to avoid interactive prompts during apt-get install
ENV DEBIAN_FRONTEND=noninteractive

# Install basic dependencies
RUN apt-get update && apt-get install -y \
    lsb-release \
    gnupg2 \
    curl \
    ca-certificates \
    locales \
    software-properties-common \
    python3-pip \
    python3-colcon-common-extensions \
    git \
    vim \

# Add ROS 2 repository
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg && \
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install ROS 2 Jazzy Jalisco desktop version
RUN apt-get update && apt-get install -y \
    ros-jazzy-desktop \
    ros-jazzy-gazebo-ros-pkgs \
    && rm -rf /var/lib/apt/lists/*

# Install Python packages for cybersecurity testing
RUN pip3 install numpy pandas matplotlib

# Create a ROS workspace and set up the source folder
WORKDIR /ros_ws
RUN mkdir -p src

# Copy your source files into the container
COPY ./src /ros_ws/src

# Build the ROS workspace
RUN /bin/bash -c "source /opt/ros/jazzy/setup.bash && colcon build"

# Add entrypoint script
COPY ./ros_entrypoint.sh /
RUN chmod +x /ros_entrypoint.sh
ENTRYPOINT ["/ros_entrypoint.sh"]

# Default command
CMD ["bash"]
