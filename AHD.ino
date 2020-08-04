#include <Arduino.h>
#include "A4988.h"

// using a 200-step motor (most common)
// pins used are DIR, STEP, MS1, MS2, MS3 in that order
A4988 stepper(200, 8, 9, 10, 11, 12);

void setup() {
    // Set target motor RPM to 1RPM and microstepping to 1 (full step mode)
    stepper.begin(1, 1);
}

void loop() {
    // Tell motor to rotate 360 degrees. That's it.
    stepper.rotate(360);
}