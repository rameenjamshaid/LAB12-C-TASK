#ifndef COMPONENTTESTER_H
#define COMPONENTTESTER_H

class ComponentTester
{
private:
    bool componentStatus;

public:
    ComponentTester();

    bool testComponent(float voltage, float current);
};

#endif