cmake_minimum_required(VERSION 2.8.3)
project(dyret_common)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
  geometry_msgs
)

add_message_files(
  DIRECTORY msg
  FILES
  Pose.msg
  ServoConfigs.msg
  ServoState.msg
  ServoStateArray.msg
  InverseKinematicsSolution.msg
  GaitControllerStatus.msg
  ActionMessage.msg
  Trajectory.msg
  DistAng.msg
  ActuatorCommand.msg
  ActuatorStates.msg
)

add_service_files(
  FILES
  ConfigureServos.srv
  CalculateInverseKinematics.srv
  GetGaitControllerStatus.srv
  GetGaitEvaluation.srv
)

generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime
  INCLUDE_DIRS include
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  include
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
)

