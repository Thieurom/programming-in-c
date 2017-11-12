//
// Program 5.1
// Calculating the Absolute Value of the Integer
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to calculate the absolute value of an integer

#include <stdio.h>

int main (void)
{
    int number;

    printf ("Type in your number: ");
    scanf ("%i", &number);

    if ( number < 0 )
        number = -number;

    printf ("The absolute value is %i\n", number);

    return 0;
}
