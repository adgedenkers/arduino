/*
Adge Denkers
adge.denkers@gmail.com
================================================================
File: mouse-broom.ino
Version: 1.0
Date: 2019-09-25
Description: Move a servo motor, attached to a mouse cord,
to keep the screen active.
*/

#include <SoftwareSerial.h>
#include <Servo.h> 

int broomPin = 9;
 
Servo broom;
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  broom.attach(broomPin); 
  broom.write(angle);
  delay(100);
} 


void loop() 
{ 
  // scan from 150 degrees to 180 degrees
  for(angle = 150; angle < 160; angle++)  
  {                                  
    broom.write(angle);               
    delay(5000);                   
  } 
  delay(10000);
  // now scan back from 180 degrees to 150 degrees
  for(angle = 160; angle > 150; angle--)    
  {                                
    broom.write(angle);           
    delay(5000);       
  } 
  delay(10000);
} 
