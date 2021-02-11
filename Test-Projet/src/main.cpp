#include <Arduino.h>

#include "Arduino.h"

#define flashLight 4


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(flashLight, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(flashLight, HIGH);
  delay(1000);
  digitalWrite( flashLight, LOW);
  delay(1000);
  Serial.print("detected");

  
}