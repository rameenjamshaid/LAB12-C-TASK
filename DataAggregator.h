#ifndef DATAAGGREGATOR_H
#define DATAAGGREGATOR_H

class DataAggregator
{
private:
    float totalData;
    int count;

public:
    DataAggregator();

    void addData(float data);
    float getAverage();
};

#endif