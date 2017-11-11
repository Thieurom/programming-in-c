// 
// Exercise 4.9.2
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

    n = 1;
    triangular_number = 0;

    while (n <= 10) {
        triangular_number += n;
        printf (" %i          %i\n", n, triangular_number);
        ++n;
    }

    return 0;
}
