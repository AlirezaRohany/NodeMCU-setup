void setup() {
  pinMode(D1, OUTPUT);
  digitalWrite(D1, HIGH);
  delay(5000);
  ESP_deep_sleep(15);
}

void loop() {}

void ESP_deep_sleep(int t){
  ESP.deepSleep(t * 1000000); 
}
