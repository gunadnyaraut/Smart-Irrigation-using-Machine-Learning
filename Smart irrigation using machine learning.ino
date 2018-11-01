#include <dht.h>

dht DHT;

#define DHT11_PIN 7
#define RELAY 8   // Connect Digital Pin 8 on Arduino to CH1 on Relay Module
 

int analogmoisture;
int temperature;
int humidity;
//#define relay 8
void setup()
{
  Serial.begin(9600);
 // Provide power to both relays
  digitalWrite(RELAY, LOW);
  delay(1000);
  
  //Turn OFF any power to the Relay channels
   digitalWrite(RELAY,LOW);
   delay(1000);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  
 //put values in variables
  analogmoisture = analogRead(A0);
  temperature = DHT.temperature;
  humidity = DHT.humidity;
  //Serial.println(),Serial.print(analogmoisture),Serial.print(','),Serial.print(temperature),Serial.print(','),Serial.print(humidity);
  
  digitalWrite(RELAY, LOW);  //Channel1 ON
  delay(1000);
   //digitalWrite(CH1, LOW);   //Channel1 OFF
   //delay(1000);
  
  //print values
  //Serial.print("Soil Moisture = ");
  //Serial.println(analogmoisture);
 
  //Serial.print("Temperature = "); 
  //Serial.println(temperature);
  
  //Serial.print("Humidity = ");
  //Serial.println(humidity);
  
  //time dalay in readings
  //delay(3000);//delay(18000000);
  
  
}



