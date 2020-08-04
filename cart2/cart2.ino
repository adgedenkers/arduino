/*
 * cart
 * --------------------------------------------
 * Control Club Car DS Golf Cart Accelerator
 * --------------------------------------------
 * version: 0.2
 * --------------------------------------------
 * 
 * Adge Denkers
 * date: 2020-07-20 revised: 
 * location: https://github.com/adgedenkers/cart.git
 * 
 * --------------------------------------------
 */
#include <Servo.h>
#include <SoftwareSerial.h>

// Define Pins
// --------------------------------------------
/* Ultrasonic Range Sensor: Trigger */
#define trigPin 5
/* Ultrasonic Range Sensor: Transmitter */
#define echoPin 4
/* Throttle Servo Motor Pin - PWM PIN Required */
#define throttlePin 3

// Define Objects
// --------------------------------------------

Servo throttleServo;            
/* create a servo object */

// Define Variables
// --------------------------------------------
long duration;            /* decimal value: length of time between pulses */
int range;                /* integer: distance to object */
int throttleAngle = 0;    /* integer: servo angle which can vary from 0 - 180 */
int throttlePercentDegree;/* integer:  */
int throttle = 0;         /* integer: angle of throttle servo moter - 0 = servo starting point, N degree of last point in servo */
int zdegree;              /* integer: first degree of servo motion */
int ndegree;              /* integer: last degree of servo motion */
int z = 0;                /* integer: zero value of Throttle (T) */
int n;                    /* integer: current value of Throttle (T) */



void setup() {
  
  /* Set Pins as inputs and outputs */
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  /* Begin Serial communication at a baudrate of 9600 */
  Serial.begin(9600);

  
}

void loop() {
  // Clear the trigPin by setting it LOW:
  digitalWrite(trigPin, LOW);

  delayMicroseconds(5);

  // Trigger the sensor by setting the trigPin high for 10 microseconds:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin. pulseIn() returns the duration (length of the pulse) in microseconds:
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance:
  range = duration * 0.034 / 2; // Value ranges from X to Y, calculation is specific for a different sensor, but we'll keep the function as is because the value itself is not really important, just knowing what the lowest and highest values are.


  // Print the distance on the Serial Monitor (Ctrl+Shift+M):
  Serial.print("Distance = ");
  Serial.print(range);
  Serial.println(" cm");

  delay(25);
}
