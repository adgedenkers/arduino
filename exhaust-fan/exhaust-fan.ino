/*
 * Exhaust Fan Controller
 * 
 * 2018-11-17
 * 
 * Adge Denkers
 * adge.denkers@gmail.com
 * 
 */

#include <ESC.h>

#define LED_PIN (13)                                        // Set the PIN for the LED
#define SPEED_MIN (10000)                                    // Set the minimum speed for the ducted fan in microseconds
#define SPEED_MAX (20000)                                    // Set the maximum speed for the ducted fan in microseconds 

ESC fanESC (9, SPEED_MIN, SPEED_MAX, 500);                  // ESC_Name (ESC Pin, Min Speed, Max Speed, Default Speed, Arm Value)
int oESC;                                                   // Variable for the speed sent to the ESC


void setup() {
  pinMode(LED_PIN, OUTPUT);                                 // LED Output
  fanESC.arm();                                             // Send the Arm value so the ESC will be ready to take commands
  digitalWrite(LED_PIN, HIGH);                              // Set the LED to High once the ESC has been Armed
  delay(5000);                                              // Wait
}


void loop() {
  for (oESC = SPEED_MIN; oESC <= SPEED_MAX; oESC += 1) {    // Ramp up speed from 1000 microseconds to 2000 microseconds
    fanESC.speed(oESC);                                     // Tell the ESC to go to the oESC speed
    delay(10);                                              // Wait 10 microseconds for the ESC to reach that speed
  }
  
  delay (1000);                                             // Wait a second

  for (oESC = SPEED_MAX; oESC >= SPEED_MIN; oESC -= 1) {    // Ramp down speed from 2000 microseconds to 1000 microseconds
    fanESC.speed(oESC);                                     // Tell the ESC to go to the oESC speed
    delay(10);                                              // Wait 10 microseconds for the ESC to reach that speed
  }

  delay(5000);                                              // Wait 5 seconds, then restart the ramp up/ramp down cycle

}





