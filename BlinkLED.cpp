#include "BlinkLED.h"
#define led 13

 void led_on(byte pin)
 {
  digitalWrite(led,HIGH);
 }

 void led_off(byte pin)
 {
  digitalWrite(led,LOW);
 }

 void ledsetup(byte pin)
 {
  pinMode(led,OUTPUT);
 }
