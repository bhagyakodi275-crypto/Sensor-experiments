#include <ESP32Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(7);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(2000);
   myservo.write(90);
  delay(2000);
   myservo.write(180);
  delay(2000);
}
