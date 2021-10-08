#pragma once

#include "stdint.h"

class FakeLightSensor
{
    public:
        FakeLightSensor();
        uint16_t lightLevel();
};