
void setup() {
  pinMode(A0, INPUT);
  pinMode(D0, OUTPUT); // using digital pin 0
  Serial.begin(115200);
}

void loop() {

  int sensorValue = analogRead(A0);   // read the input on analog pin 0

  float percent = sensorValue * (100 / 1023.0);   // Convert the analog reading (which goes from 0 - 1023) to a value between 0 to 100

  Serial.println(percent);   // print out the value we read

  if(percent >= 50)
  {
    digitalWrite(D0, HIGH);
    Serial.println("lights on!");
  }
  else
  {
    digitalWrite(D0, LOW);
    Serial.println("lights out!");
  }
  
  delay(2000);

}
