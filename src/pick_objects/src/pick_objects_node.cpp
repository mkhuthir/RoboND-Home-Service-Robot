#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

// Define a client for to send goal requests to the move_base server through a SimpleActionClient
typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv){
  // Initialize the simple_navigation_goals node
  ros::init(argc, argv, "pick_objects");

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  // Wait 5 sec for move_base action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal goal_pick_up;
  move_base_msgs::MoveBaseGoal goal_drop_off;

  // set up the frame parameters
  goal_pick_up.target_pose.header.frame_id = "map";
  goal_pick_up.target_pose.header.stamp = ros::Time::now();

  goal_drop_off.target_pose.header.frame_id = "map";
  goal_drop_off.target_pose.header.stamp = ros::Time::now();

  // Define a position and orientation for the robot to reach
  goal_pick_up.target_pose.pose.position.x = 4.0;
  goal_pick_up.target_pose.pose.position.y = 0.0;
  goal_pick_up.target_pose.pose.orientation.w = 1.0;

  goal_drop_off.target_pose.pose.position.x = 8.0;
  goal_drop_off.target_pose.pose.position.y = 8.0;
  goal_drop_off.target_pose.pose.orientation.w = 1.0;

  // Send Pick Up Goal
  ROS_INFO("Sending Pick Up Goal");
  ac.sendGoal(goal_pick_up);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    ROS_INFO("Reached Pick Up Goal");
  else{
    ROS_INFO("failed to reach Pick Up Goal");
    return 0;
  }

  // Wait 5 Sec
  ros::Duration(5.0).sleep();

  // Send Drop Off Goal
  ROS_INFO("Sending Drop Off Goal");
  ac.sendGoal(goal_drop_off);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    ROS_INFO("Reached Drop Off Goal");
  else
    ROS_INFO("Failed to reach Drop Off Goal");
  



  return 0;
}
