#!/bin/sh
xterm -e "export TURTLEBOT_GAZEBO_WORLD_FILE="~/catkin_ws/src/World/u_shape.world"" &
xterm -e "roslaunch turtlebot_gazebo turtlebot_world.launch"