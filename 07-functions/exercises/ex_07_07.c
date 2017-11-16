// 
// Exercise 7.7
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
    if (n == 0)
        return 1;

    return x * x_to_the_n(x, n - 1);
}

int main(void)
{
    int base, exp;

    printf("Calculate x power to the n:\n");

    printf("Enter base x = ");
    scanf("%i", &base);

    printf("Enter exponent n = ");
    scanf("%i", &exp);
    if (exp < 0) {
        printf("Exponent must be a positive integer.\n");
        return -1;
    }

    printf("%i power to %i is %li\n", base, exp, x_to_the_n(base, exp));

    return 0;
}
