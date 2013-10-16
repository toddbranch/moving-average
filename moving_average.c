#include "moving_average.h"

int getAverage(int array[], unsigned int arrayLength)
{
    int i, sum = 0;

    for (i = 0; i < arrayLength; i++) {
        sum += array[i];
    }

    return sum / arrayLength;
}

void addSample(int sample, int array[], unsigned int arrayLength)
{
    int i;

    for (i = 0; i < arrayLength - 1; i++) {
        array[i] = array[i+1];
    }

    array[arrayLength-1] = sample;
}

int max(int array[], unsigned int arrayLength)
{
    int i, max = array[0];

    for (i = 1; i < arrayLength; i++) {
        max = array[i] > max ? array[i] : max;
    }

    return max;
}

int min(int array[], unsigned int arrayLength)
{
    int i, min = array[0];

    for (i = 1; i < arrayLength; i++) {
        min = array[i] < min ? array[i] : min;
    }

    return min;
}

unsigned int range(int array[], unsigned int arrayLength)
{
    return max(array, arrayLength) - min(array, arrayLength);
}
