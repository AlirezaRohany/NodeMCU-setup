void setup() {
  Serial.begin(115200);
}

void loop() {

  int sensorValue = analogRead(A0);   // read the input on analog pin 0

  float percent = sensorValue * (100 / 1023.0);   // Convert the analog reading (which goes from 0 - 1023) to a value between 0 to 100

  Serial.println(percent);   // print out the value we read
  delay(2000);

}
