//
// Program 6.6
// Introducing Character Arrays
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

int main (void)
{
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
    int i;

    for ( i = 0; i < 6; ++i )
        printf ("%c", word[i]);

    printf ("\n");

    return 0;
}
