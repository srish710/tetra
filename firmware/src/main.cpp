#include <Arduino.h>

// Stage 0: USB Serial test; leave motors, servos and sensors disconnected.
void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("TETRA boot");
}

void loop() {
  Serial.println("TETRA heartbeat: firmware running");
  delay(1000);
}
