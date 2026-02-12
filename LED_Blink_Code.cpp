#include <Arduino.h>

/*

Templeate file for the first part of the IEEE Arduino Workshop

*/

// Pin connected to the +LED on the Arduino
int ledPin = 5; // D5


void setup() {
  // Runs once at the beginning and then never again


  // Telling the arduino that you will be sending power (5V) to this pin
    pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Give 5V (HIGH) to your pin
  digitalWrite(ledPin, HIGH);
  // Wait for 1000 ms (1s)
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

