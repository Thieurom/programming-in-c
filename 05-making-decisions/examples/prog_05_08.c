//
// Program 5.8
// Evaluating Simple Expressions
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

/* Program to evaluate simple expressions of the form
   number operator number                          */

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;

    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &value1, &operator, &value2);

    if ( operator == '+' )
        printf ("%.2f\n", value1 + value2);
    else if ( operator == '-' )
        printf ("%.2f\n", value1 - value2);
    else if ( operator == '*' )
        printf ("%.2f\n", value1 * value2);
    else if ( operator == '/' )
        printf ("%.2f\n", value1 / value2);

    return 0;
}
