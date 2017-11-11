// 
// Exercise 4.3
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int n, triangular_number;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");

    triangular_number = 0;

    for (n = 5; n <= 50; n = n + 5) {
        triangular_number += n * (n + 1) / 2;
        printf("%2i          %i\n", n, triangular_number);
    }

    return 0;
}
