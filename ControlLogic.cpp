#include <iostream>
#include "ControlLogic.h"

using namespace std;

void ControlLogic::calculateDose(float glucoseLevel)
{
    if (glucoseLevel > 180)
    {
        cout << "High Glucose Level!" << endl;
        cout << "Recommended Insulin Dose: 5 Units" << endl;
    }
    else if (glucoseLevel >= 70)
    {
        cout << "Glucose Level is Normal." << endl;
        cout << "No Insulin Required." << endl;
    }
    else
    {
        cout << "Glucose Level is Too Low!" << endl;
    }
}