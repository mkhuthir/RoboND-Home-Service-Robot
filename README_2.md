## How to create from scratch

#### Ensure that ROS kinetic full desktop is already installed.

#### create catkin workspace

```bash
$ mkdir -p ~/catkin_ws/src
```
#### make your empty workspace to ensure that ROS installation is fine

```bash
$ cd ~/catkin_ws
$ catkin_make
```
#### create new git repository and follow instructions on github.com to link your `~/catkin_ws` to the new repository. add `ROS` **.gitignore** to avoid uploading binary files that are not required.

```bash
$ cd ~/catkin_ws
$ git init
$ git commit -m "first commit"
$ git remote add origin https://github.com/<your newly created repository name>.git
$ git push -u origin master
```
#### add required ROS packages as git submodules

```bash
$ cd ~/catkin_ws/src
$ git submodule add https://github.com/ros-perception/slam_gmapping.git
$ git submodule add https://github.com/turtlebot/turtlebot.git
$ git submodule add https://github.com/turtlebot/turtlebot_interactions.git
$ git submodule add https://github.com/turtlebot/turtlebot_simulator.git
```
#### install ROS packages dependancies

```bash
$ sudo rosdep -i install gmapping
$ sudo rosdep -i install turtlebot
$ sudo rosdep -i install turtlebot_teleop
$ sudo rosdep -i install turtlebot_rviz_launchers
```
#### Build catkin workspace

```bash
$ cd ~/catkin_ws
$ catkin_make
```
#### source the development folder

```bash
$ echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
$ source ~/.bashrc
```

### create new packages

```bash
$ catkin_create_pkg pick_objects move_base_msgs actionlib roscpp
$ catkin_create_pkg add_markers roscpp visualization_msgs
```

to reconfirm dependacies you can use the following command:

```bash
$ rospack depends1 add_markers
```
output should be

```text
roscpp
visualization_msgs
```
### design your environment

* Open a terminal and launch Gazebo
* Click Edit and launch `Building Editor`
* Design a simple environment
* Apply textures or color
* Save the building editor environment and go back to Gazebo
* Save the Gazebo environment to the `world` directory under your `~/catkin_ws/src`
