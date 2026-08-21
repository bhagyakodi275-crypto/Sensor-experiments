#include<DHT.h>
#define ir 6
#define trig 7
#define echo 8
#define DHTPIN 9
#define DHTTYPE DHT11
DHT mydht (DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  mydht.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int irvalue=digitalRead(ir);
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long time =pulseIn(echo,HIGH);
  float distance=time*0.034/2;
  float humidity=mydht.readHumidity();
  float temperature=mydht.readTemperature();
  if(irvalue==LOW)
  {
    Serial.println("Object is detected");
    Serial.print("Distance=");
    Serial.println(distance);
    Serial.print("Temperature:");
    Serial.println(temperature);
    Serial.print("Humidity:");
    Serial.println(humidity);
  }
  else
   {
Serial.println("Object is not detected");
  }
  delay(1000);

}
//ultrasonic with ir