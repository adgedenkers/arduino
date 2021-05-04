/*
Adge Denkers
adge.denkers@gmail.com
================================================================
File: mouse-broom.ino (aka, Virtual Adge)
Version: 1.0
Date: 2019-09-25
Description: Move a servo motor, attached to a mouse cord,
to keep the screen active.
*/



#include <Servo.h> 

// Constants
int broomPin = 9;

// Objects
Servo broom;

// Initialize Objects
int angle = 0;        // servo position in degrees 


// Setup Function
void setup() 
{ 
  Serial.begin(9600);
  broom.attach(broomPin); 
  broom.write(angle);
  delay(100);
} 

// Main Function
void loop() 
{ 
//  for(int l = 0; l < 10
  for(angle = 150; angle < 180; angle++)  // scan from 150 degrees to 180 degrees  
  {                                  
    broom.write(angle);                   // set the servo to the current angle               
    delay(5);                             // wait 5 ms
    Serial.println(angle);                // print to serial: angle of servo
  }
  delay(240000);                          // 240000 ms = 4 min
  
  for(angle = 180; angle > 150; angle--)  // now scan back from 180 degrees to 150 degrees  
  {                                
    broom.write(angle);           
    delay(5);       
    Serial.println(angle);   
  }
  delay(240000);                          // 240000 ms = 4 min
  int lower = 150;
  int higher = 180;
  int dir = 0;                            // 0 = stop, 1 = forward/up, -1 = reverse/down
}

int throttle(int dir, int higher, int lower)
{
  
  if(dir = 1){
    // move forward/up
    while(dir != 0) {
      for(angle = lower; angle > higher; angle++) {
        // direction = forward/up = 1
        
      }
    }
  } else if(dir = -1) {
    // move reverse/down
    while(dir != 0) {
      for(angle = higher; angle < lower; angle--) {
        // direction = reverse/down = -1
      }
    }
  } else {
    // error - don't move at all
    dir = 0;
  }
}
