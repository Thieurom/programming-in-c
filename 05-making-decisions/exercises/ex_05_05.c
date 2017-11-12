// 
// Exercise 5.5
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number, right_digit;
    bool is_negative = false;

    printf("Enter an integer number: ");
    scanf("%i", &number);

    if (number < 0) {
        number *= -1;
        is_negative = true;
    }

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    } while (number != 0);

    if (is_negative)
        printf("-\n");
    else
        printf("\n");

    return 0;
}
