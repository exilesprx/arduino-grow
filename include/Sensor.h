#pragma once

#include <Arduino.h>
#include <DHT.h>
#include <Temperator.h>
#include <Humidity.h>

class Sensor {
    private:
        unsigned long previousMillis = 0;
        const unsigned long interval = 5000;

        DHT* dhtSensor;
        int pin = PIN3;
        int type = DHT11;
        bool useFahrenheit;
        Temperature* temperature;
        Humidity* humidity;

        float getTemperature();
        float getHumidity();
        bool timeToUpdate();

    public:
        Sensor(Temperature* temperature, Humidity* humidity);
        void checkReadings();
        
};