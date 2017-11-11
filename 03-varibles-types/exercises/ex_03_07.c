// 
// Exercise 3.7
//
// Doan Thieu - 10/2017.
//

#include <stdio.h>

int main(void)
{
    float a, b, c, d;
    float result;

    a = 3.31e-8;
    b = 2.01e-7;
    c = 7.16e-6;
    d = 2.01e-8;
    result = (a * b) / (c + d);

    printf("Result is %e", result);

    return 0;
}
