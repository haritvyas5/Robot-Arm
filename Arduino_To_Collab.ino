// Define the pins the potentiometers are connected to.
// We've renamed the original to potPin1 for consistency.
const int potPin1 = A0; // A0 is the first analog input pin.
const int potPin2 = A1; // A1 is the second analog input pin.
const int potPin3 = A2; // A2 is the third analog input pin.
const int potPin4 = A3; // A3 is the fourth analog input pin.

void setup() {
  // Start the serial communication at 9600 bits per second.
  // This part remains the same.
  Serial.begin(9600);
}

void loop() {
  // Read the analog voltage from all four potentiometers.
  // Each gives a value between 0 (for 0 volts) and 1023 (for 5 volts).
  int sensorValue1 = analogRead(potPin1);
  int sensorValue2 = analogRead(potPin2);
  int sensorValue3 = analogRead(potPin3);
  int sensorValue4 = analogRead(potPin4);

  // --- Sending the data in a comma-separated format ---

  // Print the first value
  Serial.print(sensorValue1);
  // Print a comma to act as a separator
  Serial.print(",");
  
  // Print the second value and a separator
  Serial.print(sensorValue2);
  Serial.print(",");

  // Print the third value and a separator
  Serial.print(sensorValue3);
  Serial.print(",");

  // Print the final value using "println".
  // println adds a newline character ('\n') at the end.
  // This tells Unity that this is the end of the message for this frame.
  // A typical message will look like: "512,1023,0,255"
  Serial.println(sensorValue4);

  // A small delay to prevent flooding the serial port and to stabilize readings.
  delay(10);
}