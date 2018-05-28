# This message represents the configuration of the servos
#
# - The configuration is applied to all servos if the id array is empty.
# - All parameters are added sequentially in the parameter field, so
# the length of this array may be a multiple of the number of servos in
# cases where there are more than one parameter per servo needed

# Header for general bookkeeping
std_msgs/Header header

# Configuration type
uint8 type

# Servo IDs
uint8[] ids
# Configuration parameters
float64[] parameters

# Type enumeration
uint8 TYPE_DISABLE_LOG    = 0
uint8 TYPE_ENABLE_LOG     = 1
uint8 TYPE_SET_SPEED      = 2
uint8 TYPE_SET_PID        = 3
uint8 TYPE_ENABLE_TORQUE  = 4
uint8 TYPE_DISABLE_TORQUE = 5
