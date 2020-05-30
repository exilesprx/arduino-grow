#pragma once

#include <Arduino.h>
#include <DHT.h>

class Sensor {
    private:
        DHT* dhtSensor;
        bool useFahrenheit;
    public:
        Sensor(int pin, int type, bool useFahrenheit = true);
        float getTemperature();
        float getHumidity();
};