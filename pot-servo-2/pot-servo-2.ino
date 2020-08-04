#include <Servo.h>

char rx_byte = 0;
int potPin = 0; int servoPin = 9; Servo servo;

void setup() {
  // start the serial connection
  Serial.begin(9600);
  servo.attach(servoPin);
  Serial.println("servo is setup...");
}

void loop() {
  if (Serial.available() > 0) {
    rx_byte = Serial.read();

    if ((rx_byte >= '0') && (rx_byte <= '9')) {
      Serial.print("Number received: ");
      Serial.println(rx_byte);
      int angle = rx_byte;
      servo.write(angle);
      } else {
        
      Serial.println("Not a number");
    }
  }
}
