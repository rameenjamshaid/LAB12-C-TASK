#include <iostream>

#include "SensorNode.h"
#include "DataAggregator.h"
#include "WirelessModule.h"

using namespace std;

int main()
{
    SensorNode sensor1(101);
    SensorNode sensor2(102);

    DataAggregator aggregator;
    WirelessModule wireless;


    sensor1.collectData();
    sensor2.collectData();


    aggregator.addData(sensor1.getData());
    aggregator.addData(sensor2.getData());


    float average = aggregator.getAverage();

    cout << "\nAverage Sensor Data: "
         << average << endl;


    wireless.transmitData(average);


    return 0;
}