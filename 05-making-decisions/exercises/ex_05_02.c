// 
// Exercise 5.2
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int value1, value2;

    printf("Enter two integers: ");
    scanf("%i %i", &value1, &value2);

    if (value2 == 0)
        printf("Division by zero\n");
    else
        if (value1 % value2 == 0)
            printf("%i is evenly divisible by %i\n", value1, value2);
        else
            printf("%i is not evenly divisible by %i\n", value1, value2);

    return 0;
}
