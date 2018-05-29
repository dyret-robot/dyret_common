# This message represents the configuration of the revolute joints
#
# - The configuration is applied to all joints if the id array is empty.
# - All parameters are added sequentially in the parameter field, so
# the length of this array may be a multiple of the number of joints in
# cases where there are more than one parameter per joint needed

# Joint IDs
uint8[] ids

# Configuration parameters
float64[] parameters

# Configuration type
uint8 type

uint8 TYPE_SET_SPEED      = 0
uint8 TYPE_SET_PID        = 1
uint8 TYPE_ENABLE_TORQUE  = 2
uint8 TYPE_DISABLE_TORQUE = 3
