// 
// Exercise 7.4
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


float square_root (float x, float epsilon)
{
    float guess = 1.0;

    while (absolute_value (guess * guess - x) >= epsilon) {
        printf("Guess: %f\n", guess);
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

int main(void)
{
    const float epsilon = .00001;

    printf("Calculate square root of 144.0:\n");
    printf("Result = %f\n", square_root(144.0, epsilon));

    return 0;
}
