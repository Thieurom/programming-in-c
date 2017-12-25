//
// Program 15.4
// Copying Characters from Standard Input to Standard Output
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//


// Program to echo characters until an end of file

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
