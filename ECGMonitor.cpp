#include "ECGMonitor.h"

ECGMonitor::ECGMonitor(string id,int hr):MedicalDevice(id){
    heartRate=hr;
}

void ECGMonitor::displayECG(){
    displayDevice();
    cout<<"Heart Rate: "<<heartRate<<" bpm"<<endl;
}