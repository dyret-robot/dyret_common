# This message represents the state of a single revolute joint
# it is not meant to be used alone, but as a part of other
# messages, see 'State'.

# Joint state
float32 position
float32 velocity
float32 current

# Physical state
float32 voltage
float32 temperature

# Controller state
float32 set_point

# Joint status:
uint8 status

uint8 STATUS_NOERROR       = 0
uint8 STATUS_INSTRUCTION   = 1
uint8 STATUS_OVERLOAD      = 2
uint8 STATUS_CHECKSUM      = 3
uint8 STATUS_RANGE         = 4
uint8 STATUS_OVERHEATING   = 5
uint8 STATUS_ANGLE_LIMIT   = 6
uint8 STATUS_INPUT_VOLTAGE = 7
