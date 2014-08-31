#include "Fan.h"

Fan::Fan(int pin1, int pin2)
{
    _controlPin = pin1;
    _rpmPin = pin2;
    _val = 0;
    pinMode(_controlPin, OUTPUT);
    pinMode(_rpmPin, INPUT);
    rpms = 0;
}

void Fan::setValue(int value)
{
    if (value > 255)
    {
        value = 255;
    }
    _val = value;
    analogWrite(_controlPin, _val);
}

int Fan::value()
{
    return _val;
}

void Fan::setPercents(int value)
{
    setValue(map(value, 0, 100, 0, 255));
}

int Fan::percents()
{
    return map(value(), 0, 255, 0, 100);
}

int Fan::rpm()
{
    return rpms;
}
