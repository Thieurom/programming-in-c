// 
// Exercise 7.2
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int calculate_triangular_number(int n)
{
    int i, triangular_number = 0;

    for (i = 1; i <= n; ++i)
        triangular_number += i;

    return triangular_number;
}

int main(void)
{
    int number, counter;

    for (counter = 1; counter <= 5; ++counter) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        printf("Triangular number %i is %i\n\n", number, calculate_triangular_number(number));
    }

    return 0;
}
