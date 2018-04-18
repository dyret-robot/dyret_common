# This message represents a configuration of a single Servo

# Servo ID
uint8 id
# Configuration type
uint8 type
# Parameters for type
float64[] parameters

# Type enumeration
uint8 TYPE_DISABLE_LOG    = 0
uint8 TYPE_ENABLE_LOG     = 1
uint8 TYPE_SET_SPEED      = 2
uint8 TYPE_SET_PID        = 3
uint8 TYPE_ENABLE_TORQUE  = 4
uint8 TYPE_DISABLE_TORQUE = 5
