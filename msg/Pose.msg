# Joint pose
std_msgs/Header header
# There are 12 revolute joints that have to be
# specified. Valid messages contains either 0 or 12 revolute angles
float32[] revolute
# For prismatic we allow either 0, 2 or 8 values, either
# specifying all joints or 1 for top extension and one
# for bottom extension for all legs
float32[] prismatic
