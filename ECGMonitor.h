#ifndef ECGMONITOR_H
#define ECGMONITOR_H

#include "MedicalDevice.h"

class ECGMonitor:public MedicalDevice{
protected:
    int heartRate;

public:
    ECGMonitor(string id,int hr);
    void displayECG();
};

#endif