// 
// Exercise 12.3
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main()
{
    int x = 123;
    int y = 111;

    printf("Min(%i, %i) is %i\n", x, y, MIN(x, y));

    return 0;
}
