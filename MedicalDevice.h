#ifndef MEDICALDEVICE_H
#define MEDICALDEVICE_H
#include<iostream>
using namespace std;
class MedicalDevice{
protected:
    string deviceID;
public:
    MedicalDevice(string id);
    void displayDevice();
};

#endif