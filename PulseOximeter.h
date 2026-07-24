#ifndef PULSEOXIMETER_H
#define PULSEOXIMETER_H

#include "ECGMonitor.h"

class PulseOximeter:public ECGMonitor{
private:
    int spo2;

public:
    PulseOximeter(string id,int hr,int s);
    void displayAll();
};

#endif