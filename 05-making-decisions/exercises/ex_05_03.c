// 
// Exercise 5.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int value1, value2;
    float result;

    printf("Enter two integers: ");
    scanf("%i %i", &value1, &value2);

    if (value2 == 0)
        printf("Division by zero\n");
    else {
        result = (float) value1 / value2;
        printf("The division result is %.3g\n", result);
    }

    return 0;
}
