#define ir 6
void setup()
{
  pinMode(ir,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int irvalue=digitalRead(ir);
  
 if(irvalue==LOW)
 {
  Serial.println("Object is detected");
  }
 else
 {
  Serial.println("Object is not detected");
 }
}