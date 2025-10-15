#include <Arduino.h>

/*
  This is the code for the potentiometer blinking so you don't have to write it yourself
  
*/

int ledPin1 = 9;  // Digital pin D9 (LED)
int potPin1 = A7; // Analog pin A7 (Potentiometer)

int ledPin2 = 10;
int potPin2 = A6;



void setup() {
  Serial.begin(9600);      // initialize serial communication
  pinMode(ledPin1, OUTPUT); // set LED pin as output
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // read potentiometer value (0–1023)
  int potValue1 = analogRead(potPin1);
  Serial.print("-----------------\nPotentiometer 1 Value: ---------------\n");
  Serial.println(potValue1);

  int potValue2 = analogRead(potPin2);
  Serial.print("-----------------\nPotentiometer 2 Value: ---------------\n");
  Serial.println(potValue1);

  // map pot value to delay time (faster blink = smaller delay)
  int delayTime1 = map(potValue1, 0, 1023, 1000, 50); 
  // 0 -> 1 second delay, 1023 -> 50 ms delay
  int delayTime2 = map(potValue2, 0, 1023, 1000, 50);

  // blink the LED
  digitalWrite(ledPin1, HIGH);
  delay(delayTime1);
  digitalWrite(ledPin1, LOW);
  delay(delayTime1);

  digitalWrite(ledPin2, HIGH);
  delay(delayTime2);
  digitalWrite(ledPin2, LOW);
  delay(delayTime2);
  
  
}
