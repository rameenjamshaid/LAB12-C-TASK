#include "DataAggregator.h"

DataAggregator::DataAggregator()
{
    totalData = 0;
    count = 0;
}

void DataAggregator::addData(float data)
{
    totalData += data;
    count++;
}

float DataAggregator::getAverage()
{
    if(count == 0)
        return 0;

    return totalData / count;
}