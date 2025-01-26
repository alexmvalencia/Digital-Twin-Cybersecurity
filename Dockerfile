# Use Ubuntu 24.04 as the base image
FROM ubuntu:24.04

# Set environment variables to avoid interactive prompts during apt-get install
ENV DEBIAN_FRONTEND=noninteractive

RUN locale && \
    apt update && apt install locales && \
    locale-gen en_US en_US.UTF-8 && \
    update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

ENV LANG=en_US.UTF-8

# Install basic dependencies
#RUN apt-get update && apt-get install -y \
#    lsb-release \
#    gnupg2 \
#    curl \
#    ca-certificates \
#    locales \
#    software-properties-common \
#    python3-pip \
#    python3-colcon-common-extensions \
#    git \
#    vim \

# Enable Required Repositories
RUN apt install software-properties-common -y && add-apt-repository universe

RUN apt update && apt install curl -y

# Add ROS 2 repository
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install the dev tools
RUN apt update && apt install ros-dev-tools -y

# Install ROS 2 Jazzy Jalisco desktop version
RUN apt install ros-jazzy-desktop -y

# Install Gazebo Harmonic
RUN curl https://packages.osrfoundation.org/gazebo.gpg --output /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg && \
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null && \
    apt update && apt install -y gz-harmonic

# Install Python packages for cybersecurity testing
#RUN pip3 install numpy pandas matplotlib

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
