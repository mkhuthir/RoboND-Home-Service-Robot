#!/bin/sh

# Save pgm and yaml files to src folder
xterm -e "rosrun map_server map_saver -f $HOME/catkin_ws/src/personal_map"