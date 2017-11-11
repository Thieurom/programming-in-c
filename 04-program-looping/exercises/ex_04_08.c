// 
// Exercise 4.8
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int n, number, triangular_number, turns, counter;

    printf("How many triangular numbers do you want to calculate? ");
    scanf("%i", &turns);
    printf("\n");

    for (counter = 1; counter <= turns; ++counter) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangular_number = 0;

        for (n = 1; n <= number; ++n)
            triangular_number += n;

        printf("Triangular number %i is %i\n\n", number, triangular_number);
    }

    return 0;
}
