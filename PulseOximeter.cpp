#include "PulseOximeter.h"

PulseOximeter::PulseOximeter(string id,int hr,int s):ECGMonitor(id,hr){
    spo2=s;
}

void PulseOximeter::displayAll(){
    displayECG();
    cout<<"SpO2: "<<spo2<<"%"<<endl;
}