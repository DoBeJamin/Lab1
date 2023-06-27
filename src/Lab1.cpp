/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab1/src/Lab1.ino"


void setup();
void loop();
#line 3 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab1/src/Lab1.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


void setup()
{
  pinMode(D5, OUTPUT);
}


void loop()
{
  delay(1000);
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
}