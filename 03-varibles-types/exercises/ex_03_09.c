// 
// Exercise 3.9
//
// Doan Thieu - 10/2017.
//

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 365, j = 7;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

    i = 12258, j = 23;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

    i = 996, j = 4;
    printf("The next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

    return 0;
}
