# RoboND-Home-Service-Robot
Home Service Robot using ROS/Gazebo Simulation

## How to clone workspcae from this repository

clone this repository to `~/catkin_ws` folder 

```bash
$ cd ~
$ git clone https://github.com/mkhuthir/RoboND-Home-Service-Robot.git catkin_ws
```
Initilize all registered git submodules and update them.

```bash
$ git submodule init
$ git submodule update
```
Install ROS Navigation system

```bash
$ sudo apt-get update
$ sudo apt-get install ros-kinetic-navigation
```
install ROS packages dependancies

```bash
$ sudo rosdep -i install gmapping
$ sudo rosdep -i install turtlebot
$ sudo rosdep -i install turtlebot_teleop
$ sudo rosdep -i install turtlebot_rviz_launchers
```
Build catkin workspace

```bash
$ catkin_make
```






## How to create from scratch

Ensure that ROS kinetic full desktop is already installed.

create catkin workspace

```bash
$ cd ~/catkin_ws/src
$ git submodule add https://github.com/ros-perception/slam_gmapping.git
$ git submodule add https://github.com/turtlebot/turtlebot.git
$ git submodule add https://github.com/turtlebot/turtlebot_interactions.git
$ git submodule add https://github.com/turtlebot/turtlebot_simulator.git
```

