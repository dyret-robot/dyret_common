# This message represents the configuration of the servos
#
# - The configuration is applied to all servos if the id array is empty.
# - All parameters are added sequentially in the parameter field, so
# the length of this array may be a multiple of the number of servos in
# cases where there are more than one parameter per servo needed

# Header for general bookkeeping
std_msgs/Header header

dyret_common/RevoluteConfig revolute
dyret_common/PrismaticConfig prismatic


