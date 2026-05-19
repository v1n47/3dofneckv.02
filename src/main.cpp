#include "config.hpp"

RobotState currentState = STATE_IDLE;

Servo rotateservo;
Servo updownservo;
Servo tiltservo;

void setup() {
  rotateservo.attach(10);
  updownservo.attach(11);
  tiltservo.attach(12);
  

  rotateservo.write(90);
  updownservo.write(90);
  tiltservo.write(90);

  Serial.begin(115200);
  Serial.println("System Online. 3DoF Ready.");

  randomSeed(analogRead(A0));
}

void loop() {
  switch (currentState) {
    case STATE_shake_head:
      if (shake_head() == true) {
        currentState = STATE_IDLE;
        Serial.println("Shake_head animation complete. Returning to IDLE.");
      }
      break;

    case STATE_IDLE:
      idle();
      Serial.println("ideling");
      break;
  }
}