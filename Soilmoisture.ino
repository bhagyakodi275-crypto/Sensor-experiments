#define soilpin_ang A0
#define soilpin_dig 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(soilpin_dig,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   int soilvalue_ang=analogRead(soilpin_ang);
   int soilvalue_dig=digitalRead(soilpin_dig);
  Serial.print("Soil moisture value");
  Serial.println(soilvalue_ang);
  if(soilvalue_dig==LOW)
  {
    Serial.println("Soil is wet");
  }
  else 
  {
    Serial.println("Soil is dry");
  }
  delay(1000);

}
