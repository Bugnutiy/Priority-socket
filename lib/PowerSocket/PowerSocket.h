#pragma once

#include <Arduino.h>

class PowerSocket
{
    private:
    int _voltage;
    float _temperature;
    uint8_t _PinRelay, _PinDs18, _PinHc12;
    public:
        PowerSocket();
        void on();
        void off();
        void toggle();
        void tick();
};