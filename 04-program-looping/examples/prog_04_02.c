//
// Program 4.2
// Calculating the 200th Triangular Number
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

/* Program to calculate the 200th triangular number
   Introduction of the for statement                */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 1; n <= 200; n = n + 1 )
        triangularNumber = triangularNumber + n;

    printf ("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}
