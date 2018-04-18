# Joint pose
std_msgs/Header header
# There are 12 revolute joints that have to be
# specified
float32[] revolute
# For prismatic we allow either 8 or 2 values, either
# specifying all joints or 1 for top extension and one
# for bottom extension for all joints
float32[] prismatic
