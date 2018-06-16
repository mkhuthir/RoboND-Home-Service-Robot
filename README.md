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
$ mkdir ~/catkin_ws/src -p
```
make your empty workspace to ensure that ROS installation is fine

```bash
$ cd ~/catkin_ws
$ catkin_make
```
create new git repository and follow instructions on github.com to link your `~/catkin_ws` to the new repository. add `ROS` **.gitignore** to avoid uploading binary files that are not required.

```bash
$ cd ~/catkin_ws
$ git init
$ git commit -m "first commit"
$ git remote add origin https://github.com/<your newly created repository name>.git
$ git push -u origin master
```
add required ROS packages as git submodules

```bash
$ cd ~/catkin_ws/src
$ git submodule add https://github.com/ros-perception/slam_gmapping.git
$ git submodule add https://github.com/turtlebot/turtlebot.git
$ git submodule add https://github.com/turtlebot/turtlebot_interactions.git
$ git submodule add https://github.com/turtlebot/turtlebot_simulator.git
```

