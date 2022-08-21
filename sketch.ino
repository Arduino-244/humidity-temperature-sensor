#include "dht.h" 
const int pino = A2;
dht DHT;
void setup(){
  Serial.begin(9600);
  delay(2000);
}
void loop(){
  DHT.read11(pino);
  float temperatura = DHT.temperature;
  float umidade = DHT.humidity;
  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.print("%");
  Serial.print(" / Temperatura: ");
  Serial.print(temperatura, 0);
  Serial.println("*C");
  delay(2000);
}