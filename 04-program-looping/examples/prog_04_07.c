//
// Program 4.7
// Finding the Greates Common Divisor
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

/* Program to find the greatest common divisor
   of two nonnegative integer values              */

#include <stdio.h>

int main (void)
{
    int u, v, temp;

    printf ("Please type in two nonnegative integers.\n");
    scanf ("%i%i", &u, &v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf ("Their greatest common divisor is %i\n", u);

    return 0;
}
