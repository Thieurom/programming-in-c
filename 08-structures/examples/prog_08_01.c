//
// Program 8.1
// Illustrating a Structure
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

// Program to illustrate a structure

#include <stdio.h>

int main (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2005;

    printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}
