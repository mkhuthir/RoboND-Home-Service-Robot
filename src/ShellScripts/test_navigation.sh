#!/bin/sh

# Deploy Turtlebot in personal environment
xterm -e "roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=$HOME/catkin_ws/src/World/personal.world" &
sleep 5

# amcl_demo to loclize the robot
xterm -e "roslaunch turtlebot_navigation amcl_demo.launch" &
sleep 5

# view_navigation to observe the map in rviz
xterm -e "roslaunch turtlebot_rviz_launchers view_navigation.launch" &
sleep 5