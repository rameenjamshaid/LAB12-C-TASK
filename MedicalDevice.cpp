#include "MedicalDevice.h"
MedicalDevice::MedicalDevice(string id){
    deviceID=id;
}
void MedicalDevice::displayDevice(){
    cout<<"Device ID: "<<deviceID<<endl;
}