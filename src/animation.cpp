#include "config.hpp"

bool idle(){
    unsigned long currentTime = millis();
    unsigned long last_idle_motion = 0;
    int choice = random(10);

    if (currentTime -last_idle_motion >= 4000){
        last_idle_motion = currentTime;

    }
}
//-----------------------IDLE ANIMATION---------------------------------------
bool doze_off_down(){
    int angle = 90;
    unsigned long currentTime = millis();
    unsigned long lastUpdateTime = 0;
    updownservo.write(angle);
    if(currentTime - lastUpdateTime >=20){
        lastUpdateTime = currentTime;
        if(angle > 0){
            angle--;
            updownservo.write();   
        }
    }
}

//-----------------------SPECIAL ANIMATION------------------------------------
bool shake_head() {
  static int shakeCount = 0;
  static int shakePos = 85;
  static unsigned long lastShakeTime = 0;
  unsigned long currentTime = millis();

  if (shakeCount >= 20) {
    shakeCount = 0; 
    return true;     
  }

  if (currentTime - lastShakeTime >= 100) {
    lastShakeTime = currentTime;
    shakePos = (shakePos == 85) ? 95 : 85;
    tiltservo.write(shakePos);
    shakeCount++; 
  } 
  return false;
}