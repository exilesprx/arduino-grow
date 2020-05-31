#include <Temperator.h>

Temperature::Temperature()
{
    pins[0] = COLD_PIN;
    pins[1] = NORMAL_PIN;
    pins[2] = WARM_PIN;
    pins[3] = HOT_PIN;
    
    this->initialize();
}

void Temperature::updateReading(float temperature)
{
    if (temperature < 69.00) {
        this->cold();
    } else if(temperature >= 69.00 && temperature < 78.00) {
        this->normal();
    } else if(temperature >= 78.00 && temperature < 85.00) {
        this->warm();
    } else if(temperature >= 85.00) {
       this->hot();
    }
}

void Temperature::cold()
{
    this->turnOn(COLD_PIN);
}

void Temperature::normal()
{
    this->turnOn(NORMAL_PIN);
}

void Temperature::warm()
{
    this->turnOn(WARM_PIN);
}

void Temperature::hot()
{
    this->turnOn(HOT_PIN);
}