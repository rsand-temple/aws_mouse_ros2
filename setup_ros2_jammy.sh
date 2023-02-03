sudo apt upgrade 
sudo add-apt-repository universe 
sudo apt install -y curl git gh python3-flake8-docstrings python3-pip python3-pytest-cov python3-flake8-blind-except python3-flake8-builtins python3-flake8-class-newline python3-flake8-comprehensions python3-flake8-deprecated python3-flake8-import-order python3-flake8-quotes python3-pytest-repeat python3-pytest-rerunfailures python3-testresources

# Ros2 repo
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update
sudo apt install ros-humble-desktop

# Gazebo
sudo wget https://packages.osrfoundation.org/gazebo.gpg -O /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg 
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null 
sudo apt update
sudo apt install libgz-* gz-garden

# Rosdep init
sudo rosdep init
rosdep update

#ROS2 Workspace with Sample Apps
pip3 install colcon-ros-bundle
. /opt/ros/humble/setup.bash
mkdir -p ~/ros2_ws/src 
cd ~/ros2_ws/src 
git clone https://github.com/ros/ros_tutorials.git -b humble-devel

#Sanity check all dependencies are installed:
rosdep install -i --from-path src --rosdistro humble -y

#Build the samples:
colcon build
