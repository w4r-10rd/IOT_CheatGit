// Relay Pin
const int RELAY_PIN = 13;

void setup() {
  pinMode(RELAY_PIN, OUTPUT); // Set the relay pin as output
}

void loop() {
  // Turn on the relay
  digitalWrite(RELAY_PIN, HIGH);
  delay(500);
  
  // Turn off the relay
  digitalWrite(RELAY_PIN, LOW);
  delay(500);
}
