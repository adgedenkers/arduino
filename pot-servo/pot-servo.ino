nb  #include <SoftwareSerial.h>
#include <Servo.h>

Servo esc;

int potPin = A0; 
int servoPin = 8; 

void setup() {
  
  esc.attach(servoPin);
  Serial.begin(9600);
  Serial.println("servo is configured, and the");
  Serial.println("arduino is running...");

}


void loop() {
/*
  int reading = analogRead(potPin);
  //v Serial.println(reading);
  int angle = reading / 6; // 0 to 180-ish 

  if (reading > 0) {
    Serial.println(angle);
    esc.write(angle);
  }  
 */
 int val;
 Serial.print(analogRead(A0));
 val = analogRead(A0);
 val = map(val, 0, 1023, 1000, 2000);
 esc.writeMicroseconds(val); 
}
