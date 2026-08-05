#ifndef SENSORNODE_H
#define SENSORNODE_H

class SensorNode
{
private:
    int sensorID;
    float sensorValue;

public:
    SensorNode(int id);

    void collectData();
    float getData() const;
};

#endif