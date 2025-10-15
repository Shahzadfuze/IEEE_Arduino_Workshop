#include <Arduino.h>​

​

int ledPin = 9; // LED connected to digital pin D9​

​

void setup() {​

  // Set pin D9 as an output​

  pinMode(ledPin, OUTPUT);​


  // Turn the LED ON​

  digitalWrite(ledPin, HIGH);​

}​

void loop() {​

  digitalWrite(ledPin, HIGH); // Turn LED ON​

  delay(1000);                // Wait 1 second​

​

  digitalWrite(ledPin, LOW);  // Turn LED OFF​

  delay(1000);                // Wait 1 second​

}​

​
