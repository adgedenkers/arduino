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

// For Servo Motor
#include <Servo.h>

// Circular Buffer for Averaging Latest Readings
#include <CircularBuffer.h>

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
/* create a servo object */
Servo throttle;    
/* create circular buffer for averaging distance */         
CircularBuffer<int, 20> buffer;
/* create pot buffer for pot position */
CircularBuffer<int, 10> potbuffer;


// Define Variables
// --------------------------------------------
long duration;               /* decimal value: length of time between pulses */
int range;                   /* integer: distance to object */
int throttleInit = 100;      /* integer: servo angle which can vary from 0 - 359 */
float t = 0.0;               /* float:  */
int bdistance;               /* integer: distance at zero movement */
int mdistance;               /* integer: distance at max movement */
int s = 0;                   /* integer: value of Throttle (T) */
int r = 0;                   /* integer: raw range to target */
int d = 0;                   /* integer: can't remember what this integer is for */
int firstRun = 0;            /* boolean: test if it is the first loop through */
int rangeFrequency = 8;      /* integer: how many values will be in the range rolling average */
int over = 2000;             /* integer: period of time in milliseconds */
int change = 0;              /* integer: change in servo angle */
int servo_return;            /* integer: the return value of "turnServo()" */
unsigned long time = 0;
float avg = 0.0;

int potpin = 0;              /* integer: analog pin used to connect the potentiometer */
int val;                     /* integer: variable to read the value from the analog pin */
int potavg = 0;              /* integer: average of 10 previous pot positions */

/********************************/
/* setup function               */
/********************************/
void setup() {
  
  /* Set Pins as inputs and outputs */
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  throttle.attach(9);

  /* Begin Serial communication at a baudrate of 9600 */
  Serial.begin(9600);
  delay(2000);
  
}

/********************************/
/* main program loop            */
/********************************/
void loop() {

  if (firstRun == 0) {
    Serial.println("First Run");
    firstRun = firstRun + 1;
    //throttle.write(t);
  }

  int sum = 0;
  /* get pot position */
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);  /* scale it to use it with the servo (value between 0 and 180) */
  potbuffer.push(val);
  using index_t = decltype(potbuffer)::index_t;
  for (index_t i=0; i < potbuffer.size(); i++) {
    sum += potbuffer[i];
  }
  potavg = sum / potbuffer.size(); /* Average all the entries in the buffer - 10 entries */
  
  Serial.print("POT Average: ");
  Serial.println(potavg);
  // reset `sum` variable
  sum = 0;
  
  /* get range to target */
  getRange();

  throttle.write(val); 

  
  
  /*
  if(range > 2 && range < 4) {
    throttle.write(50);
  }

  if(range >= 4 && range < 7) {
    throttle.write(35);
  }
  //throttle.write(t);               //command to rotate the servo to the specified angle 
  */
  delay(15);
}

// Function
// Get range to target
int getRange()
{
  /* Get Distance from Floor */
  // clear the trigger
  // Clear the trigPin by setting it LOW:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  // send a signal
  // Trigger the sensor by setting the trigPin high for 10 microseconds:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // read the signal return
  /* Read the echoPin. pulseIn() */
  /* It returns the duration (length of the pulse) in microseconds */
  duration = pulseIn(echoPin, HIGH);
  buffer.push(duration);

  if (millis() >= 100) {
    float avg = 0.0;
    float sum = 0.0;
    using index_t = decltype(buffer)::index_t;
    for (index_t i=0; i < buffer.size(); i++) {
      sum += buffer[i];
    }
    
    avg = sum / buffer.size(); /* Average all the entries in the buffer - 20 entries */
    /* Calculate the distance: */
    range = avg * 0.034 / 2; 

  }
  /* Print the distance on the Serial Monitor (Ctrl+Shift+M): */
  /*
  Serial.print("Distance = ");
  Serial.print(range);
  Serial.println(" cm");
  */
  return range;
}

int averageBuffer(int value, CircularBuffer<int, 20> avgBuffer) {
  int sum = 0;
  potbuffer.push(value);
  using index_t = decltype(potbuffer)::index_t;
  for (index_t i=0; i < potbuffer.size(); i++) {
    sum += potbuffer[i];
  }
    
  avg = sum / avgBuffer.size(); /* Average all the entries in the buffer - 20 entries */
  return avg;
}