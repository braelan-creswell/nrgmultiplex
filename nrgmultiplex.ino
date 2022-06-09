const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

const int digitalOne = 16;
const int digitalTwo = 5;
const int digitalThree = 14;


int sensorValue = 0;        // value read from the pot

void setup() {
  pinMode(digitalOne, OUTPUT); 
  digitalWrite(digitalOne, 1);
  pinMode(digitalTwo, OUTPUT);
  digitalWrite(digitalTwo, 1); 
  pinMode(digitalThree, OUTPUT);
  digitalWrite(digitalThree, 1); 
  Serial.begin(19200);
}

void loop() {

  // read the analog in value:

  sensorValue = analogRead(analogInPin);

  //check value
  if(sensorValue > 0 && sensorValue < 30) {
    digitalWrite(digitalOne, 0);
  }
  else {
    digitalWrite(digitalOne, 1);
  }
  if(sensorValue > 500 && sensorValue < 570) {
    digitalWrite(digitalTwo, 0);
  }
  else {
    digitalWrite(digitalTwo, 1);
  }
  if(sensorValue > 770 && sensorValue < 830) {
    digitalWrite(digitalThree, 0);
  }
  else {
    digitalWrite(digitalThree, 1);
  }

  // print the results to the Serial Monitor:

  Serial.print(sensorValue);

  Serial.print("\n");

  // wait 2 milliseconds before the next loop for the analog-to-digital

  // converter to settle after the last reading:

  delay(50);
}
