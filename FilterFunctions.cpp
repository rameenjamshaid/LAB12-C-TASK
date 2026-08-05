#include "FilterFunctions.h"

float FilterFunctions::lowPassFilter(float signal)
{
    return signal * 0.9;
}