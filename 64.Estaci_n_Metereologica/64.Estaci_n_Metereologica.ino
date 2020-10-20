/*JavierDomingo @ control

Este programa tiene como objetivo monitorizar la temperatura, humedad y nivel de iluminación de
un espacio. Se utiliza una placa de desarrollo Arduino Nano, un sensor de humedad dth11
y un sensor de luz.*/

#include <DHT.h>
#define DHTPIN 7 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  float sensor_reading = analogRead(0);
  float light = sensor_reading / 1024 * 100;
  Serial.print(temperature);
  Serial.print(humidity);
  Serial.print(light);
  delay(500);
}
