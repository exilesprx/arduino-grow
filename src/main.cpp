#include <Arduino.h>
#include <Sensor.h>
#include <Configuration.h>

Sensor* sensor;

void setup() 
{
  Serial.println("Starting...");
  Serial.begin(SPEED);

  sensor = new Sensor(new Temperature(), new Humidity());
}

void loop()
{
  sensor->checkReadings();
}