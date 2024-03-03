// Define the pin to which the LED is connected
const int ledPin = 3;  // You can change this to the pin where your LED is connected

void setup() {
  // Start serial communication
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Wait for serial connection
  while (!Serial);
}

void loop() {
  // Prompt for user input
  Serial.println("Enter LED brightness percentage (0, 25, 50, 75, 100): ");
  
  // Wait for input from the serial monitor
  while (!Serial.available());
  
  // Read the value from the serial monitor
  int brightness = Serial.parseInt();
  
  // Ensure the brightness value is within the valid range (0 to 100)
  brightness = constrain(brightness, 0, 100);
  
  // Map the brightness value to the PWM range (0 to 255)
  int pwmValue = map(brightness, 0, 100, 0, 255);
  
  // Set the LED brightness
  analogWrite(ledPin, pwmValue);
  
  // Print the current brightness to the serial monitor
  Serial.print("LED Brightness set to: ");
  Serial.print(brightness);
  Serial.println("%");
  
  // Wait for a moment before prompting again
  delay(10);
}
