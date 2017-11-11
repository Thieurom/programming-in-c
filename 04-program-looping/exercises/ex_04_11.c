// 
// Exercise 4.11
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int number, digit, sum_of_digits;

    printf("Enter your number: ");
    scanf("%i", &number);

    sum_of_digits = 0;
    do {
        digit = number % 10;
        sum_of_digits += digit;
        number /= 10;
    } while (number != 0);

    printf("Sum of the digits of your number is %i", sum_of_digits);

    return 0;
}
