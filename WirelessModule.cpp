#include <iostream>
#include "WirelessModule.h"

using namespace std;

void WirelessModule::transmitData(float data)
{
    cout << "Transmitting data wirelessly..." << endl;
    cout << "Data sent: " << data << endl;
}