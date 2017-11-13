// 
// Exercise 5.6
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number, reversed_number, right_digit, trailing_zeros;
    bool has_more_trailing_zeros;

    printf("Enter an integer number: ");
    scanf("%i", &number);

    has_more_trailing_zeros = true;
    trailing_zeros = 0;
    reversed_number = 0;

    // Reverse the original number together with count its trailing zeros
    do {
        right_digit = number % 10;

        if (has_more_trailing_zeros && right_digit == 0)
            ++trailing_zeros;
        else
            has_more_trailing_zeros = false;

        reversed_number = reversed_number * 10 + right_digit;
        number /= 10;
    } while (number != 0);

    // Display each digits of reversed number in English from right to left
    while (reversed_number != 0) {
        right_digit = reversed_number % 10;

        switch (right_digit) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                break;
        }

        reversed_number /= 10;
    }

    // Display trailing zeros if any
    while (trailing_zeros > 0) {
        printf("zero ");
        --trailing_zeros;
    }

    // End of line
    printf("\n");

    return 0;
}
