#include "mbed.h"
#include "fakeLightSensor.h"

FakeLightSensor::FakeLightSensor()
{

}

uint8_t FakeLightSensor::getData()
{
    uint8_t random = rand() % 1000 + 1;
    return random;
}