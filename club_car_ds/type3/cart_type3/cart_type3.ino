/*
  Author:       Adge Denkers (adge.denkers@gmail.com)
  File Name:    cart_throttle.ino
  File Version: 1.0
  Date Created: 2020-09-29
  Date Revised: 2021-05-04
  Description:  Control throttle using a servo motor attached to the carburator,
                by using an ultrasonic distance sensor under the throttle peddal
                to measure distance from peddal to floor.
*/

/*
  CONFIGURATION
  =============
  POWER SWITCH
  -- Turns on power to the Arduino, Servo and all other components

  -- On/Off Switch
  
  -- Wiring
  
  KILL SWITCH
  -- Executes emergency stop procedure (depending on other factors, 
  --    it may or may not shut off the engine)
  
  -- Momentary Button
  
  -- Wiring

  POTENTIOMETER (pot) W/ Terminals Pointed Down
  -- Controls the speed of the cart

  -- Wiring
    Left Terminal   = -       => Ground
    Center Terminal = control => pot_pin pin        // set below
    Right Terminal  = +       => 5.5 v


  SERVO carb_servo
  -- Controls the throttle on the carburator of the cart engine

  -- Wiring
    Black           = -       => Ground
    Red             = +       => 5.5 v
    White           = control => pin_carb_servo pin // set below


  
  
*/

// Included Libraries
#include <Servo.h>

// Constants
int pin_carb       = 9; // pin connected to the carb_servo
int pin_pot        = 4; // analog pin used to connect to the potentiometer
int val;                // the variable to read the value from the analog pin

// Variables
int ps             = 1; // program status:  1 = Good
                        //                  2 = Shutdown
                        //                  3 = Emergency Shutdown

// Functions
int readDistance(int triggerPin, int echoPin) {
  
}

// Objects


/* 
 *  
int throttle(int ap, int dir)           // ap = adge power
{                                       // dir = direction -> 0 = stopped
                                        //                    1 = forward
                                        //                   -1 = reverse
  if(dir = 1){
    // move forward/up
    while(dir <> 0) {
      for(angle = lower; angle > higher; angle++) {
        // direction = forward/up = 1
        
      }
    }
  } else if(dir = -1) {
    // move reverse/down
    while(dir <> 0) {
      for(angle = higher; angle < lower; angle--) {
        // direction = reverse/down = -1
      }
    }
  } else {
    // error - don't move at all
    dir = 0;
  }
}
*/




// Objects
Servo carb_servo;

void setup() {
  // start the serial com port
  Serial.begin(9600);

  // attach the carb_servo to the pin_carb
  carb_servo.attach(pin_carb);
}

void loop() {
  
  while (ps = 1) {                       // while the program status is 1 (Good)
    // *****************************************************
    // move the servo as you move the knob for the pot
    // *****************************************************
    val = analogRead(pin_pot);           // reads the value of the potentiometer (value between 0 and 1023)
    val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
    carb_servo.write(val);               // sets the servo position according to the scaled value
    Serial.println(val);
    // *****************************************************
    delay(5);                            // waits for the servo to get there
    
  }

  // exited the while loop, because ps was set to something other than 1
  // what happens after we get out of that loop?
  
}


/*
// Constants
int pin_throttle = 9;
int pin_ult_echo = 6;
int pin_ult_trig = 7;

int t_off = 11;   // distance (in cm) from floor, where throttle is off
int t_max = 2;    // distance (in cm) from floor, where throttle is at max
int s_off = 33;   // angle at which the servo turns off the carburator
int s_max = 93;   // angle at which the servo has the carburator at max throttle


// Variables
int dis = 0;      // current distance (in cm) from throttle peddal to floor
int angle = 0;    // angle of the servo motor (throttle)

// Objects
Servo throttle;

// Functions
// ==================================================================
// ----- readDistance(trigger, echo) -----
long readDistance(int triggerPin, int echoPin) {
  
  int t = 0;        // travel time from sensor to floor, in microseconds
  long d = 0.00000;   // distance from peddal to floor in cm
  
  // Clear the trigger
  pinMode(triggerPin, OUTPUT);
  
  // Set the trigger pin to LOW state
  digitalWrite(triggerPin, LOW);
  
  // Wiat 2 microseconds
  delayMicroseconds(2);
  
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  
  // Sets the trigger pin back to LOW state
  digitalWrite(triggerPin, LOW);
  
  // Read the Echo Pin
  pinMode(echoPin, INPUT);
  
  // Set d to the sound wave travel time in microseconds
  t = pulseIn(echoPin, HIGH);
  
  // Convert time in microseconds to the distance to floor in cm
  d = t * 0.01723;
  
  // Return the distance
  return d;
}


// Setup Function
void setup() {
  
  // Start Serial Monitor
  Serial.begin(9600);
  
  // Attach the Throttle Servo to the throttle pin
  throttle.attach(pin_throttle);
  throttle.write(s_off);
}

// Main Loop
void loop() {

  dis = readDistance(pin_ult_trig, pin_ult_echo);
  
  angle = map(dis, t_off, t_max, s_off, s_max);
  //analogWrite(pin_throttle, angle);
  throttle.write(angle);
  Serial.println(angle);
  delay(100);
}
*/
