#!/bin/sh

# Deploy Turtlebot in personal environment
xterm -e "export ROBOT_INITIAL_POSE='-x -4.0 -y 4.0 -Y -1.57079633' && roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=$(rospack find wall_follower)/world/personal.world" &
sleep 5

# Run slam_gmapping to perfrom SLAM
# xterm -e "rosrun gmapping slam_gmapping" & # use this for default gmapping parameters
xterm -e "roslaunch wall_follower slam_gmapping.launch" &
sleep 5

# view_navigation to observe the map in rviz
xterm -e "roslaunch wall_follower view_navigation.launch" &
sleep 5

# launch wall_follower
xterm -e "rosrun wall_follower node"