/*
  Author:       Adge Denkers (adge.denkers@gmail.com)
  File Name:    cart_throttle.ino
  File Version: 1.0
  Date Created: 2020-09-29
  Date Revised:
  Description:  Control throttle using a servo motor attached to the carburator,
                by using an ultrasonic distance sensor under the throttle peddal
                to measure distance from peddal to floor.
*/

/*
  Wire Colors
  ===========
  Ultrasonic Distance Sensor
  --------------------------
  Green   = Power
  Red     = Trigger // pin 7
  Black   = Echo    // pin 6
  White   = Ground
  
  Servo Motor
  --------------------------
  Brown   = Ground
  Red     = Power
  Orange  = Signal  // pin 9
  
*/

// Included Libraries
#include <Servo.h>

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
