#include "mbed.h"
#include "fakeLightSensor.h"

FakeLightSensor::FakeLightSensor()
{
    srand(time(NULL));
}

uint16_t FakeLightSensor::lightLevel()
{
    uint16_t random = rand() % 1000 + 1;
    return random;
}