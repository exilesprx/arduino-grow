#include <Sensor.h>

Sensor::Sensor(int pin, int type, bool useFahrenheit)
{
    dhtSensor = new DHT(pin, type);

    dhtSensor->begin();
}

float Sensor::getHumidity()
{
    return dhtSensor->readHumidity();
}

float Sensor::getTemperature()
{
    return dhtSensor->readTemperature(useFahrenheit);
}