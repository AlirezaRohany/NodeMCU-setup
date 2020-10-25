/* 
  since we need to mesure our surrounding constantly, we cannot use the delay function
  because it will stop the program and therefore we would be un able to mesure the level
  of brightness
*/

int ledPin = D1;
int ldrPin = 0;

int ledState = HIGH; // variable to hold the current led state

// should use unsigned long data type variables to store time related data
unsigned long previousBlinkStamp = 0;  // will store last time LED was updated

float interval = 1000.0; // interval at which to blink (milliseconds)

void setup() {
  pinMode(A0, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  unsigned long currentMillis = millis();
  int sensorValue = analogRead(A0);

  float percent = sensorValue * (100 / 1023.0);

  interval = 100 * percent;
  Serial.println(interval);
  if (currentMillis - previousBlinkStamp >= interval)
  {
    previousBlinkStamp = currentMillis;

    if (ledState == LOW)
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}
