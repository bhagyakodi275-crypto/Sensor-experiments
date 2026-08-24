#include <ESP32Servo.h>

#define ir 6
#define servoPin 7

Servo myservo;

void setup()
{
  myservo.attach(servoPin);

  pinMode(ir, INPUT);

  Serial.begin(115200);

  Serial.println("Automatic Door System Started");

  // Door initially closed
  myservo.write(0);
  delay(1000);
}

void loop()
{
  int irvalue = digitalRead(ir);

  Serial.print("IR Value: ");
  Serial.println(irvalue);

  if(irvalue == LOW)
  {
    Serial.println("Object is detected");
    Serial.println("Door is opening");

    myservo.write(90);

    delay(3000);

    Serial.println("Door is closing");

    myservo.write(0);

    delay(2000);

    Serial.println("Door is closed");
  }

  else
  {
    Serial.println("Object is not detected");
    Serial.println("Door will not open");

    myservo.write(0);
  }

  delay(500);
}