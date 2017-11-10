// 
// Exercise 3.6
//
// Doan Thieu - 10/2017.
//

#include <stdio.h>

int main(void)
{
    float x = 2.55;
    float result;

    result = 3 * (x * x * x) - 5 * (x * x) + 6;

    printf("The value of 3x^3 - 5x^2 + 6 at %g is %g\n", x, result);

    return 0;
}
