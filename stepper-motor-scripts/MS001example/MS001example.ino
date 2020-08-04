#include <SoftwareSerial.h>
#include <Arduino.h>
#include "A4988.h"

// using a 200-step motor (most common)
// pins used are DIR, STEP, MS1, MS2, MS3 in that order


int stp = 13;  //connect pin 13 to step
int dir = 12;  // connect pin 12 to dir
int a = 0;     //  gen counter

void setup() 
{                
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);       
}


void loop() 
{
  if (a <  200)  //sweep 200 step in dir 1
   {
    a++;
    digitalWrite(stp, HIGH);   
    delay(20);               
    digitalWrite(stp, LOW);  
    delay(40);              
   }
  else 
   {
    digitalWrite(dir, HIGH);
    a++;
    digitalWrite(stp, HIGH);  
    delay(10);               
    digitalWrite(stp, LOW);  
    delay(10);
    
    if (a>400)    //sweep 200 in dir 2
     {
      a = 0;
      digitalWrite(dir, LOW);
     }
    }
}



/*A4988 stepper(200, 8, 9, 10, 11, 12);

void setup() {
    // Set target motor RPM to 1RPM and microstepping to 1 (full step mode)
    stepper.begin(1, 1);
}

void loop() {
    // Tell motor to rotate 360 degrees. That's it.
    stepper.rotate(360);
}*/
