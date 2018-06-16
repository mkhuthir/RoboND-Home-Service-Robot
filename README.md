# RoboND-Home-Service-Robot
Home Service Robot using ROS/Gazebo Simulation


```bash
$ cd ~
$ git clone https://github.com/mkhuthir/RoboND-Home-Service-Robot.git catkin_ws
$ git submodule init
$ git submodule update
$ sudo apt-get update
$ sudo apt-get install ros-kinetic-navigation
```

### to add ROS packages

```bash
$ cd ~/catkin_ws/src
$ git submodule add https://github.com/ros-perception/slam_gmapping.git
$ git submodule add https://github.com/turtlebot/turtlebot.git
$ git submodule add https://github.com/turtlebot/turtlebot_interactions.git
$ git submodule add https://github.com/turtlebot/turtlebot_simulator.git
```

### To install dependancies
```bash
$ rosdep -i install gmapping
$ rosdep -i install turtlebot
$ rosdep -i install turtlebot_teleop
$ rosdep -i install turtlebot_rviz_launchers
```
