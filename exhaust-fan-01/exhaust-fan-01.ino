/** 
  Adge Denkers
  adge.denkers@gmail.com

  2019-03-28
  Run an EDF using an ESC and Arduino - no R/C
**/
#include <SoftwareSerial.h>
#include <Servo.h>`

Servo esc;
int throttlePin = 0;
SoftwareSerial serial(10,11);

void setup()
{
  serial.begin(9600);
  esc.attach(0);
  Serial.print(analogRead(throttlePin));
}

void loop()
{
esc.write(70000);
/*int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 0, 179);
esc.write(throttle);
Serial.print(analogRead(throttlePin));*/

}
