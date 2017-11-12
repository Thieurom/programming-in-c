// 
// Exercise 5.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float number;
    char operator;
    float accumulator = 0;
    bool is_ended = false;
    bool is_error = false;

    printf("Begin Calculations\n");

    do {
        scanf("%f %c", &number, &operator);

        switch (operator) {
            case 'S':
            case 's':
               accumulator = number; 
               break;
            case '+':
               accumulator += number;
               break;
            case '-':
               accumulator -= number;
               break;
            case '*':
               accumulator *= number;
               break;
            case '/':
               if (number == 0) {
                   is_error = true;
                   printf("Division by zero\n");
               } else
                   accumulator /= number;
               break;
            case 'E':
            case 'e':
               is_ended = true;
               break;
            default:
               is_error = true;
               printf("Unknown operator\n");
               break;
        }

        if (!is_error)
            printf("= %f\n", accumulator);
        else
            is_error = false;
    } while (!is_ended);

    printf("End of Calculations\n");

    return 0;
}
