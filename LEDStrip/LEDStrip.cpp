#include "LEDStrip.h"

LEDStrip::LEDStrip(int pin)
{
    _pin = pin;
    _val = 0;
    pinMode(_pin, OUTPUT);
}

void LEDStrip::setValue(int value)
{
    if (value > 255)
    {
        value = 255;
    }
    _val = value;
    analogWrite(_pin, _val);
}

int LEDStrip::value()
{
    return _val;
}

void LEDStrip::setPercents(int value)
{
    setValue(map(value, 0, 100, 0, 255));
}

int LEDStrip::percents()
{
    return map(value(), 0, 255, 0, 100);
}
