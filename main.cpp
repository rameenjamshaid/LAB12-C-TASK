#include <iostream>
#include "DeviceParameters.h"
#include "ControlLogic.h"
#include "SafetyChecks.h"

using namespace std;

int main()
{
    float glucose;

    cout << "Enter Glucose Level: ";
    cin >> glucose;

    DeviceParameters patient(glucose);
    SafetyChecks safety;
    ControlLogic controller;

    if (safety.checkSafety(patient.getGlucoseLevel()))
    {
        controller.calculateDose(patient.getGlucoseLevel());
    }
    else
    {
        cout << "Warning! Unsafe glucose level." << endl;
    }

    return 0;
}