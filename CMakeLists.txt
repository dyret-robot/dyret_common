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
  Configuration.msg
  RevoluteConfig.msg
  PrismaticConfig.msg
  RevoluteState.msg
  PrismaticState.msg
  State.msg
)

add_service_files(
  FILES
  Configure.srv
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

