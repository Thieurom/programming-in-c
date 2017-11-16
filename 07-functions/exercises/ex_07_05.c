// 
// Exercise 7.5
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

float absolute_value(float x)
{
    if ( x < 0 )
        x = -x;

    return x;
}


float square_root(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absolute_value((guess * guess / x) - 1) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int main(void)
{
    printf("square_root(1.2e+9) = %f\n", square_root(1.2e+9));
    printf("square_root(1.2e-9) = %f\n", square_root(1.2e-9));

    return 0;
}
