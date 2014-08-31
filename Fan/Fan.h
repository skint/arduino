#ifndef FAN_H
#define FAN_H
#include <Arduino.h>

class Fan
{
    public:
        Fan(int pin1, int pin2 = 2);
        void setValue(int value);
        int value();
        void setPercents(int value);
        int percents();
        int rpm();
        unsigned long rpms;
    private:
        int _controlPin;
        int _rpmPin;
        int _val;
};

#endif
