#pragma once

#include "stdint.h"

class FakeLightSensor
{
    public:
        FakeLightSensor();
        uint8_t getData();
}