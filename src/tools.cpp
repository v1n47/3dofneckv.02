#include "config.hpp"

int manageRandomDecision() {
  static unsigned long lastTriggerTime = 0; 
  unsigned long currentTime = millis();
  if (currentTime - lastTriggerTime >= 3000) {
    lastTriggerTime = currentTime;

    int choice = random(10);
    return choice; 
  }
}