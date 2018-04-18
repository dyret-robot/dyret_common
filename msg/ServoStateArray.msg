# This message is intended as the output of Dyret

# Header for general bookkeeping
std_msgs/Header header
# State of revolute joints
dyret_common/ServoState[12] revolute
# State of extension joints
dyret_common/ServoState[8] prismatic
