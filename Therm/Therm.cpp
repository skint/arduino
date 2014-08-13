#include <Arduino.h>
#include "Therm.h"

Therm::Therm(int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}

float Therm::raw()
{
    float raw = analogRead(_pin);
    return raw;
}

float Therm::cels()
{
    int raw = analogRead(_pin);
    float voltage = raw * 5.0;
    voltage /= 1024.0;
    return (voltage - 0.5) * 100;
}

float Therm::fahr()
{
    float tempC = cels();
    return (tempC * 9.0 / 5.0) + 32.0;
}

float Therm::kalv()
{
    float tempC = cels();
    return tempC + 273.15;
}
