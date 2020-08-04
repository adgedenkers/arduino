#include <SpacebrewYun.h>
#include <SoftwareSerial.h>



int relayPin = 8;    // communicate with relay

void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);  // set to output
  Serial.begin(9600);
  Serial.print("starting things up - setting the ESC pin and write time");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin, HIGH);
  delay(2000);
  digitalWrite(relayPin, LOW);
  delay(2000);
}
