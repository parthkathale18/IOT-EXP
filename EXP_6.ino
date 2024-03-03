 const int ledPins[] = {2, 3, 4, 5, 6}; // Change these pins as
 per your setup
 const int switchPin = 7;
 your setup
 // Variables
 int counter = 0;
 int switchState = 0;
 int lastSwitchState = 0;
 void setup() {
 // Initialize LEDs as outputs
 for (int i = 0; i < 4; i++) {
 pinMode(ledPins[i], OUTPUT);
 }
 // Initialize switch as input
 2023-24 ENP361-1 Experiment 06
 // Change this pin as per
 Parth Kathale (A-13)
pinMode(switchPin, INPUT_PULLUP);
 // Set initial state of LEDs
 updateLEDs();
 }
 void loop() {
 // Read the state of the switch
 switchState = digitalRead(switchPin);
 // Check if the switch state has changed
 if (switchState != lastSwitchState) {
 if (switchState == HIGH) {
 // Increment the counter when the switch is pressed
 counter = (counter + 1) % 16;
 updateLEDs();
 }
 delay(50); // Debounce delay
 }
 // Save the current switch state for comparison
 lastSwitchState = switchState;
 2023-24 ENP361-1 Experiment 06
 Parth Kathale (A-13)
}
 // Function to update LEDs based on the current counter value
 void updateLEDs() {
 for (int i = 0; i < 4; i++) {
 digitalWrite(ledPins[i], bitRead(counter, i));
 }
 }
 2023-24 ENP361-1 Experiment 06
 Parth Kathale (A-13)
Parth Kathale (A-