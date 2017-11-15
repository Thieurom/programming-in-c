// 
// Exercise 6.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    float values[10], sum;
    int i;

    printf("Enter 10 floating numbers:\n");

    for (i = 0; i < 10; ++i)
        scanf("%f", &values[i]);

    for (i = 0; i < 10; ++i)
        sum += values[i];

    printf("The average is %g\n", sum / 10);

    return 0;
}
