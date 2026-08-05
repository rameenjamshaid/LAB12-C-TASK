#include <iostream>
#include "SensorNode.h"

using namespace std;

SensorNode::SensorNode(int id)
{
    sensorID = id;
    sensorValue = 0;
}

void SensorNode::collectData()
{
    sensorValue = 98.6;   // Example temperature/biomedical reading

    cout << "Sensor " << sensorID 
         << " collected data: " 
         << sensorValue << endl;
}

float SensorNode::getData() const
{
    return sensorValue;
}