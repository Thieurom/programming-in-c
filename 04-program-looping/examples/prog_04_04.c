//
// Program 4.4
// Asking the User for Input
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber;

    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triangularNumber = 0;

    for ( n = 0; n <= number; ++n )
        triangularNumber += n;

    printf ("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}
