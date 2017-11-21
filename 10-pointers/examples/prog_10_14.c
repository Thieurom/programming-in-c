//
// Program 10.14
// Revised Version of the copyString() Function
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Function to copy one string to another. Ver. 2

#include <stdio.h>

void copyString (char *to, char *from)
{
    while ( *from )
        *to++ = *from++;

    *to = '\0';
}

int main (void)
{
    void copyString (char *to, char *from);
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString (string2, string1);
    printf ("%s\n", string2);

    copyString (string2, "So is this.");
    printf ("%s\n", string2);

    return 0;
}
