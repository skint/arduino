#ifndef POWER_H
#define POWER_H
#include <Arduino.h>

class Power
{
    public:
        Power(int pin, int state = LOW);
        void on();
        void off();
        int status();
        int defs();
        void reset(int delayTime = 3000);
    private:
        int _pin;
        int _state;
};

#endif
