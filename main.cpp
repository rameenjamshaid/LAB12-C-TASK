#include <iostream>
#include "SignalProcessor.h"
#include "FilterFunctions.h"
#include "DataReader.h"

using namespace std;

int main()
{
    DataReader reader;
    FilterFunctions filter;
    SignalProcessor processor;

    float signal = reader.readData();
    signal = filter.lowPassFilter(signal);

    processor.processSignal(signal);

    return 0;
}