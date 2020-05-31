#include <Component.h>
#include <Arduino.h>

void Component::initialize()
{
    for (int pin : pins) {
        pinMode(pin, OUTPUT);
        digitalWrite(pin, LOW);
    }
}

void Component::turnOn(int targetPin)
{
    for(int pin : pins) {
        if (pin == targetPin) {
            digitalWrite(pin, HIGH);
            continue;
        }

        digitalWrite(pin, LOW);
    }
}