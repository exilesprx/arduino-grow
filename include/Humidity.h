#pragma once

#include <Component.h>
#include <Configuration.h>

class Humidity: public Component
{
    private:
        void low();
        void normal();
        void high();

    public:
        Humidity();
        void updateReading(float humidity);
};