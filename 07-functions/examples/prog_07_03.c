//
// Program 7.3
// More on Calling Functions
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

void printMessage (void)
{
    printf ("Programming is fun.\n");
}

int main (void)
{
    int i;

    for ( i = 1; i <= 5; ++i )
        printMessage ();

    return 0;
}
