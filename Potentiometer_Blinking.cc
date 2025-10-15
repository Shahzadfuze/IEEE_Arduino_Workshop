#include <Arduino.h>

/*
  This is the code for the potentiometer blinking so you don't have to write it yourself
  
*/

int ledPin = 9;  // Digital pin D9 (LED)
int potPin = A7; // Analog pin A7 (Potentiometer)

void setup() {
  Serial.begin(9600);      // initialize serial communication
  pinMode(ledPin, OUTPUT); // set LED pin as output
}

void loop() {
  // read potentiometer value (0–1023)
  int potValue = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  // map pot value to delay time (faster blink = smaller delay)
  int delayTime = map(potValue, 0, 1023, 1000, 50); 
  // 0 -> 1 second delay, 1023 -> 50 ms delay

  // blink the LED
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
