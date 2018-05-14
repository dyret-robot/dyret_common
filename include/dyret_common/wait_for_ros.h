#include "ros/ros.h"

void inline waitForRosInit(ros::Publisher givenPublisher, std::string givenOutput){
  if (givenPublisher.getNumSubscribers() >= 1 || !ros::ok()) return;
    ROS_INFO("Waiting for pub %s", givenOutput.c_str());
    fflush(stdout);
    while (ros::ok() && givenPublisher.getNumSubscribers() < 1){ sleep(1);}
    if (ros::ok()) ROS_INFO("Done waiting for pub %s", givenOutput.c_str());
}

void inline waitForRosInit(ros::Subscriber givenSubscriber, std::string givenOutput){
  if (givenSubscriber.getNumPublishers() >= 1 || !ros::ok()) return;
  ROS_INFO("Waiting for sub: %s", givenOutput.c_str());
  fflush(stdout);
  while (ros::ok() && givenSubscriber.getNumPublishers() < 1){ sleep(1); }
  if (ros::ok()) ROS_INFO("Done waiting for sub: %s", givenOutput.c_str());
}

void inline waitForRosInit(ros::ServiceClient givenServiceClient, std::string givenOutput){
  if (givenServiceClient.waitForExistence(ros::Duration(0.1)) == false){
    ROS_INFO("Waiting for service %s", givenOutput.c_str());
    fflush(stdout);
  } else return;

  givenServiceClient.waitForExistence();
  ROS_INFO("Done waiting for service %s", givenOutput.c_str());
}
