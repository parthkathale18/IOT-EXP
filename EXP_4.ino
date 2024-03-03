/*
Experiment No. : 04
Statement : Fade and brighten 5 LEDs alternatively.
Date of Exp. : xx/xx/xxxx
Author : Parth Kathale  (A-13)
*/

const int numLeds = 5;
int ledPins[numLeds] = {2,3,4,5,6}; // Adjust the pin numbers based on your circuit
int fadeSpeed = 5; // Adjust the fade speed as needed

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Fade in
  for (int brightness = 0; brightness <= 255; brightness += fadeSpeed) {
    for (int i = 0; i < numLeds; i++) {
      analogWrite(ledPins[i], brightness);
      delay(30); // Adjust the delay as needed
    }
  }

  // Fade out
  for (int brightness = 255; brightness >= 0; brightness -= fadeSpeed) {
    for (int i = numLeds - 1; i >= 0; i--) {
      analogWrite(ledPins[i], brightness);
      delay(30); // Adjust the delay as needed
    }
  }
}