// 
// Exercise 7.11
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int array_sum(int array[], int n);
    int sample_array[5] = { 24, 32, 6, 78, 33 };

    printf("Sum of all array's items is %i\n", array_sum(sample_array, 5));

    return 0;
}


int array_sum(int array[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; ++i)
        sum += array[i];

    return sum;
}
