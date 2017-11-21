//
// Program 10.15
// Using Pointers to Find the Length of a String
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Function to count the characters in a string - Pointers version

#include <stdio.h>

int stringLength (const char *string)
{
    const char *cptr = string;

    while ( *cptr )
        ++cptr;

    return cptr - string;
}

int main (void)
{
    int stringLength (const char *string);

    printf ("%i  ", stringLength ("stringLength test"));
    printf ("%i  ", stringLength (""));
    printf ("%i\n", stringLength ("complete"));

    return 0;
}
