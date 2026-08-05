#include <iostream>

#include "ComponentTester.h"
#include "VoltageCalculator.h"
#include "SafetyReport.h"

using namespace std;

int main()
{
    float voltage;
    float current;


    cout << "Enter Voltage (V): ";
    cin >> voltage;


    cout << "Enter Current (A): ";
    cin >> current;


    ComponentTester tester;
    VoltageCalculator calculator;
    SafetyReport report;


    bool result = tester.testComponent(voltage, current);


    float power = calculator.calculatePower(voltage, current);


    report.generateReport(result, power);


    return 0;
}