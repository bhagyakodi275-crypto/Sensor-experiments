#define ldr 8
void setup() {
  // put your setup code here, to run once:
pinMode(ldr,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrvalue=digitalRead(ldr);
if(ldrvalue==LOW)
{
  Serial.println("Its Bright");
  Serial.println("Off the led");

}
else
{
  Serial.println("Its dark");
  Serial.println("On the led");
}
}
