#include <Humidity.h>

Humidity::Humidity()
{
    pins[0] = LOW_PIN;
    pins[1] = NORMAL_PIN;
    pins[2] = HIGH_PIN;
    
    this->initialize();
}

void Humidity::updateReading(float humidity)
{
    if (humidity < 45.00) {
        this->low();
    } else if (humidity >= 45.00 && humidity < 60.00) {
        this->normal();
    } else if (humidity >= 60.00) {
        this->high();
    }
}

void Humidity::low()
{
    this->turnOn(LOW_PIN);
}

void Humidity::normal()
{
    this->turnOn(NORMAL_PIN);
}

void Humidity::high()
{
    this->turnOn(HIGH_PIN);
}