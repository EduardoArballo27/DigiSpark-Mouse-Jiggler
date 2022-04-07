//Makes mouse do a jiggle jiggle

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  //Moves mouse back and fourth
  DigiMouse.moveY(1); 
  DigiMouse.delay(50);
  DigiMouse.moveY(-1);
  
  //Waits one minute before repeating
  DigiMouse.delay(60000);
}
