#pragma once

#include <Component.h>
#include <Configuration.h>

class Temperature: public Component
{
    private:
        void cold();
        void normal();
        void warm();
        void hot();

    public:
        Temperature();
        void updateReading(float temperature);
};