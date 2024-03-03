const int button1Pin = 8; // Pin for the first switch
const int button2Pin = 11; // Pin for the second switch

const int ledStartPin = 2; // Start pin for the LEDs
const int numLEDs = 5;     // Number of LEDs

void setup() {
  // Set the button pins as inputs
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);

  // Set the LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledStartPin + i, OUTPUT);
  }
}

void loop() {
  // Check the state of the first switch
  if (digitalRead(button1Pin) == LOW) {
    runLEDsForward();
  }

  // Check the state of the second switch
  if (digitalRead(button2Pin) == LOW) {
    runLEDsBackward();
  }
}

void runLEDsForward() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledStartPin + i, HIGH);
    delay(100);
    digitalWrite(ledStartPin + i, LOW);
  }
}

void runLEDsBackward() {
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledStartPin + i, HIGH);
    delay(100);
    digitalWrite(ledStartPin + i, LOW);
  }
}
