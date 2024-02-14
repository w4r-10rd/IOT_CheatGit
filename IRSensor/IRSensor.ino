// IR Sensor Pin
const int IR_PIN = 13;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(IR_PIN, INPUT); // Set the IR pin as input
}

void loop() {
  int sensorValue = digitalRead(IR_PIN); // Read the value of the IR pin

  if (sensorValue == LOW) {
    Serial.println("Obstacle detected!"); // Output a message if an obstacle is detected
  }

  delay(50); // Delay between readings
}
