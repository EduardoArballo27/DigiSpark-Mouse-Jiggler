#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  //Moves mouse back and fourth
  DigiMouse.moveY(1); 
  DigiMouse.delay(50);
  DigiMouse.moveY(-1);
  
  //Blinks LED light for half a second
  digitalWrite(1,LOW);
  DigiKeyboard.delay(50);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(1,LOW);
  
  //Waits one minute before repeating
  DigiMouse.delay(60000);
}
