# This message is intended as the output of Dyret

# Header for general bookkeeping
std_msgs/Header header

# State of revolute joints
dyret_common/RevoluteState[12] revolute
# State of prismatic joints
dyret_common/PrismaticState[8] prismatic
