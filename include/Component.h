#pragma once

using namespace std;

class Component
{
    protected:
        int pins[5];
        void turnOn(int pin);
        void initialize();
};