#ifndef THERM_H
#define THERM_H

#include <Arduino.h>

class Therm
{
    public:
        Therm(int pin);
        float raw();
        float cels();
        float fahr();
        float kalv();
    private:
        int _pin;
};

#endif
