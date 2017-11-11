// 
// Exercise 4.9.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main (void)
{
    int n, number, triangular_number, counter;

    counter = 1;

    while (counter <= 5) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);

        n = 1;
        triangular_number = 0;

        while (n <= number) {
            triangular_number += n;
            ++n;
        }

        printf ("Triangular number %i is %i\n\n", number, triangular_number);
        ++counter;
    }

    return 0;
}
