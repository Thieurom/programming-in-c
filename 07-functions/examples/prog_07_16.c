//
// Program 7.16
// Illustrating Static and Automatic Variables
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to illustrate static and automatic variables

#include <stdio.h>

void auto_static (void)
{
    int autoVar = 1;
    static int staticVar = 1;

    printf ("automatic = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main (void)
{
    int i;
    void auto_static (void);

    for ( i = 0; i < 5; ++i )
        auto_static ();

    return 0;
}
