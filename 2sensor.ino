#define ir 6
#define ldr 7

void setup() {
  pinMode(ir, INPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irvalue = digitalRead(ir);
  int ldrvalue = digitalRead(ldr);

  if (irvalue == LOW) {
    if (ldrvalue == LOW) {
      Serial.println("Object is detected");
      Serial.println("It's Bright");
    }
    else {
      Serial.println("Object is detected");
      Serial.println("It's Dark");
    }
  }
  else {
    Serial.println("Object is not detected");
  }

  delay(2000);
}