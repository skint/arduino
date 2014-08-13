#ifndef LEDSTRIP_H
#define    LEDSTRIP_H
#include <Arduino.h>

class LEDStrip
{
    public:
        LEDStrip(int pin);
        void setValue(int value);
        int value();
        void setPercents(int value);
        int percents();
    private:
        int _pin;
        int _val;
};

#endif
