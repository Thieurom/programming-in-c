// 
// Exercise 4.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int n, counter, factorial_number;

    printf("TABLE OF FACTORIAL NUMBERS\n\n");
    printf(" n     Product from 1 to n\n");
    printf("---    -------------------\n");

    for (n = 1; n <= 10; ++n) {
        factorial_number = 1;

        for (counter = 1; counter <= n; ++counter) {
            factorial_number = factorial_number * counter;
        }

        printf("%2i            %i\n", n, factorial_number);
    }

    return 0;
}
