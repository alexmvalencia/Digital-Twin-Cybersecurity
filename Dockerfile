# Use Ubuntu 24.04 as the base image
FROM ubuntu:24.04

# Set environment variables to avoid interactive prompts during apt-get install
ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=en_US.UTF-8

RUN locale && \
    apt update && apt install -y locales && \
    locale-gen en_US.UTF-8 && \
    update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

# Enable Required Repositories
RUN apt install -y software-properties-common && add-apt-repository universe

RUN apt update && apt install -y curl wget

# Add ROS 2 repository
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install the dev tools
RUN apt update && apt install -y ros-dev-tools

# Install ROS 2 Jazzy Jalisco desktop version
RUN apt install -y ros-jazzy-desktop

# Install Gazebo Harmonic
RUN curl https://packages.osrfoundation.org/gazebo.gpg --output /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg && \
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null && \
    apt update && apt install -y gz-harmonic

# Install dependencies to ensure Gazebo works correctly
#RUN apt update && apt install -y \
#    gazebo11 \
#    libgazebo11-dev \
#    gazebo11-common \
#    gazebo11-plugin-base

# Download Gazebo default models (ground_plane, sun)
#RUN mkdir -p /usr/share/gazebo-11/models && \
#    wget -q -O /tmp/models.tar.gz https://github.com/osrf/gazebo_models/archive/main.tar.gz && \
#    tar -xzf /tmp/models.tar.gz -C /usr/share/gazebo-11/models --strip-components=1 && \
#    rm /tmp/models.tar.gz

# Set Gazebo environment variables
#ENV GAZEBO_MODEL_PATH=/usr/share/gazebo-11/models
#ENV GAZEBO_RESOURCE_PATH=/usr/share/gazebo-11
#ENV GAZEBO_PLUGIN_PATH=/usr/lib/x86_64-linux-gnu/gazebo-11/plugins
#ENV GAZEBO_MODEL_DATABASE_URI=http://models.gazebosim.org

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
