/*
 * How to use multiple tabs in Arduino code?
 * Example to blink an LED using multiple tabs
 * Make your own header file blink.h
 */

#define led 13
#include "BlinkLED.h"

 void setup()
 {
  ledsetup(led);
 }

 void loop()
 {
  led_on(led);
  delay(100);
  led_off(led);
  delay(100);
 }
