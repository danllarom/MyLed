#include "led.h"

MyLed powerstate(D2);

void setup() {
  // put your setup code here, to run once:
  powerstate.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  powerstate.parpadear(6,8);

  powerstate.pin = D4;
}
