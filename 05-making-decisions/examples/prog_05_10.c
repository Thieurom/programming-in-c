//
// Program 5.10
// Generating a Table of Prime Numbers
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to generate a table of prime numbers

#include <stdio.h>

int main (void)
{
    int p, d;
    _Bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        isPrime = 1;

        for ( d = 2; d < p; ++d )
            if ( p % d == 0 )
                isPrime = 0;

        if ( isPrime != 0 )
            printf ("%i  ", p);
    }

    printf ("\n");

    return 0;
}
