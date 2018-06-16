# RoboND-Home-Service-Robot

Home Service Robot using ROS/Gazebo Simulation

## How to clone workspcae from this repository

#### clone this repository to `~/catkin_ws` folder 

```bash
$ cd ~
$ git clone https://github.com/mkhuthir/RoboND-Home-Service-Robot.git catkin_ws
$ cd ~/catkin_ws/src
$ ls
```
#### Initilize all registered git submodules and update them.

You will be using the following ROS packages:

* **gmapping**: With the `gmapping_demo.launch` file, you can easily perform SLAM and build a map of the environment with a robot equipped with laser range finder sensors or RGB-D cameras.

* **turtlebot_teleop**: With the `keyboard_teleop.launch` file, you can manually control a robot using keyboard commands.

* **turtlebot_rviz_launchers**: With the `view_navigation.launch` file, you can load a preconfigured rviz workspace. You’ll save a lot of time by launching this file, because it will automatically load the robot model, trajectories, and map for you.

* **turtlebot_gazebo**: With the `turtlebot_world.launch` you can deploy a turtlebot in a gazebo environment by linking the world file to it.

packages are already included in git repository as submodules, you will need to initialize it and update it.

```bash
$ git submodule init
$ git submodule update
```
#### Install ROS Navigation system

```bash
$ sudo apt-get update
$ sudo apt-get install ros-kinetic-navigation
```
#### install ROS packages dependancies

```bash
$ sudo rosdep -i install gmapping
$ sudo rosdep -i install turtlebot
$ sudo rosdep -i install turtlebot_teleop
$ sudo rosdep -i install turtlebot_rviz_launchers
```
### install xterm if you dont have it

```bash
$ sudo apt-get install xterm
```

#### Build catkin workspace

```bash
$ cd ~/catkin_ws
$ catkin_make
```
#### source the devel folder

```bash
$ echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
$ source ~/.bashrc
```





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
#### source the devel folder

```bash
$ echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
$ source ~/.bashrc
```


