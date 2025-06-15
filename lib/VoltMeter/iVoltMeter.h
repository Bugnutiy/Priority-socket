#pragma once
#include <Arduino.h>

class iVoltMeter
{
    public:
        virtual int getVoltage() = 0;
};