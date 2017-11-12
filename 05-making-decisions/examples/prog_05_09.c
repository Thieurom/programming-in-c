//
// Program 5.9
// Revising the Program to Evaluate Simple Expressions, Version 2
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

    switch (operator)
    {
        case '+':
            printf ("%.2f\n", value1 + value2);
            break;
        case '-':
            printf ("%.2f\n", value1 - value2);
            break;
        case '*':
            printf ("%.2f\n", value1 * value2);
            break;
        case '/':
            if ( value2 == 0 )
                printf ("Division by zero.\n");
            else
                printf ("%.2f\n", value1 / value2);
            break;
        default:
            printf ("Unknown operator.\n");
            break;
    }

    return 0;
}
