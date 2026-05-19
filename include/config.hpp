#ifndef config
#define config
#include <Arduino.h>
#include <Servo.h>

extern Servo rotateservo;
extern Servo updownservo;
extern Servo tiltservo;


constexpr int interval = 15;

enum RobotState {
  STATE_shake_head,
  STATE_IDLE
};

extern RobotState currentState;

enum ServoID {
  S1, S2, S3, unknown
};

extern ServoID servonum;

extern int targetAngles[unknown];



//animation
bool shake_head();
bool idle();
#endif