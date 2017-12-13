// 
// Exercise 12.4
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MAX3(x, y, z) MAX(MAX(x, y), z)

int main()
{
    int x = 123;
    int y = 111;
    int z = 132;

    printf("Max(%i, %i, %i) is %i\n", x, y, z, MAX3(x, y, z));

    return 0;
}
