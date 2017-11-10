// 
// Exercise 3.4
//
// Doan Thieu - 10/2017.
//

#include <stdio.h>

int main(void)
{
    int f_degree = 27;
    float c_degree;

    c_degree = (f_degree - 32) / 1.8;

    printf("%i degrees Fahrenheit are equal to %f degrees Celsius\n", f_degree, c_degree);

    return 0;
}
