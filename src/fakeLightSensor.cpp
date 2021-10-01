#include "mbed.h"
#include "fakeLightSensor.h"

FakeLightSensor::FakeLightSensor()
{

}

uint8_t FakeLightSensor::getData()
{
    int random = rand() % 1000 + 1;
    return random;
}