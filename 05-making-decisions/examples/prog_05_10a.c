//
// Program 5.10A
// Revising the Program to Generate a Table of Prime Numbers
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int p, d;
    bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        isPrime = true;

        for ( d = 2; d < p; ++d )
            if ( p % d == 0 )
                isPrime = false;

        if ( isPrime != false )
            printf ("%i  ", p);
    }

    printf ("\n");

    return 0;
}
