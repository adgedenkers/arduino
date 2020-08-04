/*
Adge Denkers
adge.denkers@gmail.com
================================================================
File: mouse-broom.ino
Version: 1.0
Date: 2020-06-12
Description: Move a servo motor which adjusts
the the throttle on the carburator on the 
golf cart - in relation to the position of
the pot - which is spun as the pedle is pushed.
*/

#include <SoftwareSerial.h>
#include <Servo.h> 

int broomPin = 9; // pin number attached to controller wire for servo
Servo broom;

int angle = 0; // servo position in degrees

void setup() {
  broom.attach(broomPin);
  broom.write(angle);
  delay(100); 
}

void loop() {
  // put your main code here, to run repeatedly:

}
