#include <Arduino.h>
#define flashLight 4

void setup() {
  // put your setup code here, to run once:
  pinMode(flashLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(flashLight, HIGH);
  delay(1000);
  digitalWrite( flashLight, LOW);
}