#define X_RANGE_MAX 220
#define X_RANGE_MIN 0
#define Y_RANGE_MAX 220
#define Y_RANGE_MIN 0
#define Z_RANGE_MAX 200
#define Z_RANGE_MIN 0

/******** Motors ********/
#define REVERSE_X_DIR false
#define REVERSE_Y_DIR false
#define REVERSE_Z_DIR true
#define REVERSE_Z1_DIR true
#define REVERSE_E_DIR true

#define STEPS_PER_UNIT_X 80
#define STEPS_PER_UNIT_Y 80
#define STEPS_PER_UNIT_Z 400
// #define STEPS_PER_UNIT_Z1 400
#define STEPS_PER_UNIT_E 400

/******** Heaters ********/
#define HOTEND_KP 4.7
#define HOTEND_KI 0.42
#define HOTEND_KD 16

#define HOTBED_KP 4.0
#define HOTBED_KI 1.0
#define HOTBED_KD 0

/******** Planner ********/
#define BLOCK_BUFFER_SIZE 16

// if total steps need be advanced is too few(5 steps), drop this block
#define MIN_EVENT_COUNT 5

// Minimum planner junction speed
#define MINIMUM_PLANNER_SPEED 0.05 // mm/s

#define MAX_ACCELERATION_X  2000 // mm/s^2
#define MAX_ACCELERATION_Y  2000 // mm/s^2
#define MAX_ACCELERATION_Z   100 // mm/s^2
#define MAX_ACCELERATION_E 10000 // mm/s^2

#define DEFAULT_XJERK 10.0 // mm/s
#define DEFAULT_YJERK 10.0
#define DEFAULT_ZJERK  0.3
#define DEFAULT_EJERK  5.0