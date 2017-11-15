//
// Program 7.17
// Calculating Factorials Recursively
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

int main (void)
{
    unsigned int j;
    unsigned long int factorial (unsigned int n);

    for ( j = 0; j < 11; ++j )
        printf ("%2u! = %lu\n", j, factorial (j));

    return 0;
}

// Recursive function to calculate the factorial of a positive integer

unsigned long int factorial (unsigned int n)
{
    unsigned long int result;

    if ( n == 0 )
        result = 1;
    else
        result = n * factorial (n - 1);

    return result;
}
