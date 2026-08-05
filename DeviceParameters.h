#ifndef DEVICEPARAMETERS_H
#define DEVICEPARAMETERS_H

class DeviceParameters
{
private:
    float glucoseLevel;

public:
    DeviceParameters(float glucose);

    float getGlucoseLevel() const;
};

#endif