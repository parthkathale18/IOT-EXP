/*
Experiment No. : 01
Statement : Make running light pattern of 5 LEDs. It should run in both the directions continuously.
Date of Exp. : xx/xx/xxxx
Author : Parth Kathale (A-13)
*/
const int numLeds = 5;
int ledPins[numLeds] = {2, 3, 4, 5, 6}; // Adjust the pin numbers based on your circuit

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Run forward
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }

  // Run backward
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}