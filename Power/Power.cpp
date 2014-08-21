#include "Power.h"

Power::Power(int pin, int state)
{
    _pin = pin;
    _state = state;
    pinMode(_pin, OUTPUT);
}

void Power::on()
{
    if (_state == LOW)
    {
        digitalWrite(_pin, HIGH);
    }
    else
    {
        digitalWrite(_pin, LOW);
    }
}

void Power::off()
{
    if (_state == HIGH)
    {
        digitalWrite(_pin, LOW);
    }
    else
    {
        digitalWrite(_pin, HIGH);
    }
}

int Power::status()
{
    if (digitalRead(_pin) == _state)
    {
        return LOW;
    }
    else
    {
        return HIGH;
    }
}

void Power::reset(int delayTime)
{
    if (status() == HIGH)
    {
       off();
       delay(delayTime);
       on();
    }
}
