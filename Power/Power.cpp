#include "Power.h"

Power::Power(int pin, int state)
{
    _pin = pin;
    _state = state;
    pinMode(_pin, OUTPUT);
}

void Power::on()
{
    int action;
    if (_state == LOW)
    {
        action = HIGH;
    }
    else if (_state == HIGH)
    {
        action = LOW;
    }

    digitalWrite(_pin, action);
}

void Power::off()
{
    int action;
    if (_state == LOW)
    {
        action = LOW;
    }
    else if (_state == HIGH)
    {
        action = HIGH;
    }

    digitalWrite(_pin, action);
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

int Power::defs()
{
    return _state;
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
