# moving_average

This is Capt Branchflower's moving average code from the L22 assignment in ECE382.

moving_average.h offers five functions:

- `int getAverage(int array[], unsigned int arrayLength)`
    - Returns the average of the values in an array
- `void addSample(int sample, int array[], unsigned int arrayLength)`
    - Discards the first element in the array, moves all other elements up one, adds sample as last element in array
- `int max(int array[], unsigned int arrayLength)`
    - Returns maximum value in an array
- `int min(int array[], unsigned int arrayLength)`
    - Returns minimum value in an array
- `unsigned int range(int array[], unsigned int arrayLength)`
    - Returns range of values in an array

If you're unclear on how you might demo this, a sample program is included as main.c.

If you find issues, file a bug report!

Anyone is free to use this code in any way, provided they document it.
