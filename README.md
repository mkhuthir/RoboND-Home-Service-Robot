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

### install xterm if you dont have it

```bash
$ sudo apt-get install xterm
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

## How to use this repository

first change to the workspace directory

```bash
$ cd ~/catkin_ws
```

#### Testing SLAM
```bash
$ ./src/ShellScripts/test_slam.sh
```
#### Testing Navigation
```bash
$ ./src/ShellScripts/test_navigation.sh
```
#### Saving SLAM Map
```bash
./src/ShellScripts/save_map.sh
```
#### Pick_objects
```bash
$ ./src/ShellScripts/pick_objects.sh
```

#### Add Markers
```bash
$ ./src/ShellScripts/add_marker.sh
```

#### Home Service

```bash
$ ./src/ShellScripts/home_service.sh
```


## Video of the Test


[![test video](http://img.youtube.com/vi/Z9pwkvCbkwU/0.jpg)](http://www.youtube.com/watch?v=Z9pwkvCbkwU)


