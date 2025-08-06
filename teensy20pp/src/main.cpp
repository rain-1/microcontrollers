/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIN_D0, OUTPUT);
  pinMode(PIN_D1, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(PIN_D0, HIGH);
  digitalWrite(PIN_D1, LOW);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(PIN_D0, LOW);
  digitalWrite(PIN_D1, HIGH);
   // wait for a second
  delay(1000);
}
