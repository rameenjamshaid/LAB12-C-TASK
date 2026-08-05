#include <iostream>
#include "SafetyReport.h"

using namespace std;

void SafetyReport::generateReport(bool status, float power)
{
    cout << "\n----- Electrical Safety Report -----" << endl;

    cout << "Power Consumption: "
         << power << " Watts" << endl;


    if(status)
    {
        cout << "Status: SAFE" << endl;
        cout << "Device passed safety inspection." << endl;
    }
    else
    {
        cout << "Status: UNSAFE" << endl;
        cout << "Device failed safety inspection." << endl;
    }
}