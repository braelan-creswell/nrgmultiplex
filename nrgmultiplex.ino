const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot

void setup() {
  Serial.begin(19200);
}

void loop() {

  // read the analog in value:

  sensorValue = analogRead(analogInPin);

  // print the results to the Serial Monitor:

  Serial.print(sensorValue);

  Serial.print("\n");

  // wait 2 milliseconds before the next loop for the analog-to-digital

  // converter to settle after the last reading:

  delay(50);
}
