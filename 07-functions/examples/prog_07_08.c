//
// Program 7.8
// Calculcating the Square Root of a Number
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

// Function to calculate the absolute value

float absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;

    return x;
}


// Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}
