//
// Program 5.3
// Determining if a Number Is Even or Odd
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to determine if a number is even or odd

#include <stdio.h>

int main (void)
{
    int number_to_test, remainder;

    printf ("Enter your number to be tested: ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;

    if ( remainder == 0 )
        printf ("The number is even.\n");

    if ( remainder != 0 )
        printf ("The number is odd.\n");

    return 0;
}
