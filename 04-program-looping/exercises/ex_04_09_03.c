// 
// Exercise 4.9.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int n, number, triangular_number;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    n = 1;
    triangular_number = 0;

    while (n <= number) {
        triangular_number += n;
        ++n;
    }

    printf("Triangular number %i is %i\n", number, triangular_number);

    return 0;
}
