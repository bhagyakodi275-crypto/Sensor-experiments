#define gas_dig 6
#define gas_anlg A0
#define LED 13

void setup() {
  pinMode(gas_dig, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int digitalvalue = digitalRead(gas_dig);
  int analogvalue = analogRead(gas_anlg);

  Serial.print("Analog value: ");
  Serial.println(analogvalue);

  if (digitalvalue == LOW) {
    Serial.println("Gas is detected");
    digitalWrite(LED, HIGH);
  }
  else {
    Serial.println("Gas is not detected");
    digitalWrite(LED, LOW);
  }

  delay(1000);
}