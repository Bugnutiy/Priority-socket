#pragma once

#include <Arduino.h>

class PowerSocket
{
    private:
    int voltage;
    public:
        PowerSocket();
        void on();
        void off();
        void toggle();
        void tick();
};