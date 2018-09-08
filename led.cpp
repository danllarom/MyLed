#include "led.h"

MyLed::MyLed(int p){
  pin=p;
}

MyLed::MyLed(int p,int v){
  pin=p;
  valorInicial=v;
}

void MyLed::init(){
  pinMode(pin, OUTPUT);

  //ponemos valor inicial:
  digitalWrite(pin, valorInicial);
}

void MyLed::parpadear(int frecuencia, int tiempo){
  int t0=millis();
  while(millis()-t0<tiempo){
    digitalWrite(pin, LOW);
    delay(1/frecuencia);
    digitalWrite(pin, HIGH);
    delay(1/frecuencia);
  }
}
