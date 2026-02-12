#include <Arduino.h>



int ledPin = 9;  // Digital pin D9 (LED)
int potPin = A7; // Analog pin A7 (Potentiometer)


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // set LED pin as output
}

void loop() {
  // put your main code here, to run repeatedly:

  int potValue = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  // simple scaling (inverse so higher pot = faster blink)
  int delayTime = 1000 - (potValue / 1.1);
  // roughly converts 0–1023 → 1000–70 ms

  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);


}

