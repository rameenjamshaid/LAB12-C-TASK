#include <iostream>
#include "ComponentTester.h"

using namespace std;

ComponentTester::ComponentTester()
{
    componentStatus = false;
}

bool ComponentTester::testComponent(float voltage, float current)
{
    // Safety limits
    if(voltage <= 240 && current <= 10)
    {
        componentStatus = true;
    }
    else
    {
        componentStatus = false;
    }

    return componentStatus;
}