#include <Arduino.h>
#include <Sensor.h>

const int SPEED = 9600;

Sensor* sensor;

void setup() 
{
  Serial.println("Starting...");
  Serial.begin(SPEED);

  sensor = new Sensor(PIN2, DHT11);
}

void loop()
{
  delay(5000);

	Serial.print("Humidity is:");
	Serial.println(sensor->getHumidity());

	Serial.print("Temperature is:");
	Serial.println(sensor->getTemperature());
}