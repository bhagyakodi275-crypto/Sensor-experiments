#define ir 6
#define led 8
void setup()
{
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int irvalue=digitalRead(ir);
  
 if(irvalue==LOW)
 {
  digitalWrite(led,HIGH);
  Serial.println("Object is detected");

  }
 else
 {
  digitalWrite(led,LOW);
  Serial.println("Object is not detected");
 }
}