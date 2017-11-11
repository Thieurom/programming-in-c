// 
// Exercise 4.2
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main()
{
    int n;

    printf(" n      Square of n (n^2)\n");
    printf("---    -------------------\n");

    for (n = 1; n <= 10; ++n) {
        printf("%2i             %i\n", n, n * n);
    }

    return 0;
}
