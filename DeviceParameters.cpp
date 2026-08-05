#include "DeviceParameters.h"

DeviceParameters::DeviceParameters(float glucose)
{
    glucoseLevel = glucose;
}

float DeviceParameters::getGlucoseLevel() const
{
    return glucoseLevel;
}