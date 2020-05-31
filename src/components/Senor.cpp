#include <Sensor.h>

Sensor::Sensor(Temperature* temperature, Humidity* humidity)
{
    this->dhtSensor = new DHT(pin, type);

    this->temperature = temperature;

    this->humidity = humidity;

    this->dhtSensor->begin();
}

void Sensor::checkReadings()
{
    if (!this->timeToUpdate()) {
        return;
    }
    
    float humidity = this->getHumidity();

    float temperature = this->getTemperature();

    Serial.print("Humidity is:");
	Serial.println(humidity);

	Serial.print("Temperature is:");
	Serial.println(temperature);
}

float Sensor::getHumidity()
{
    float humid = dhtSensor->readHumidity();

    this->humidity->updateReading(humid);

    return humid;
}

float Sensor::getTemperature()
{
    float temp = dhtSensor->readTemperature(useFahrenheit);

    this->temperature->updateReading(temp);

    return temp;
}

bool Sensor::timeToUpdate()
{
    unsigned long currentMillis = millis();

    return currentMillis - previousMillis >= interval;
}