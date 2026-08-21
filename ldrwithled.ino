#define ldr 6
#define led 8
void setup() {
  // put your setup code here, to run once:
pinMode(ldr,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrvalue=digitalRead(ldr);
if(ldrvalue==LOW)
{
  Serial.println("Its bright");
  Serial.println("Off the led");
  digitalWrite(led,LOW);
}
else
Serial.println("Its dark");
Serial.println("On the led");

digitalWrite(led,HIGH);
}
delay(1000);
