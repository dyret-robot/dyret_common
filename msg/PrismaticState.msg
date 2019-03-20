# This message represents the state of a single prismatic joint
# it is not meant to be used alone, but as a part of other
# messages, see 'State'.

# Joint state
float32 position
uint8 pwm

# Controller state
float32 set_point
float32 error

# Joint status:
uint8 status

uint8 STATUS_RESTING = 0
uint8 STATUS_RUNNING = 1
uint8 STATUS_ERROR   = 2
