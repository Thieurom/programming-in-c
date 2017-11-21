//
// Program 10.5
// Using Structures Containing Pointers
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to use structures containing poiters

#include <stdio.h>

int main (void)
{
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf ("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf ("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

    return 0;
}

