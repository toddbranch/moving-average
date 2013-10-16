/* main.c
 *
 * Author: Todd Branchflower
 * Date: 11 Oct 2013
 * Description: Program to demonstrate moving_average.h
 */

#include <stdio.h>
#include "moving_average.h"

#define N_AVG_SAMPLES 4

int main(int argc, const char *argv[])
{
    int array[N_AVG_SAMPLES] = {0};
    int testArray[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
    int testLoc = 0;

    while (testLoc < sizeof(testArray) / sizeof(int))
    {
        addSample(testArray[testLoc], array, N_AVG_SAMPLES);
        printf("%d\n", getAverage(array, N_AVG_SAMPLES));
        testLoc++;
        sleep(1);
    }

    return 0;
}
