#include<DHT.h>
#define DHTPIN 7
#define ir 6
#define DHTTYPE DHT11
DHT mytemp(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  mytemp.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int irvalue=digitalRead(ir);
  float humidity=mytemp.readHumidity();
  float temperature=mytemp.readTemperature();
  if(irvalue==LOW)
  {
    Serial.println("Object is detected");
    Serial.print("Temperature:");
    Serial.print(temperature);
    Serial.print("Humidity:");
    Serial.println(humidity);
  }
  else
  {
    Serial.println("Object is not detected");
  }
  delay(1000);

}
//IR SENSOR+DHT11