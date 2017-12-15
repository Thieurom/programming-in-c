// 
// Exercise 12.9
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define ABSOLUTE_VALUE(n) ((n) < 0 ? -(n) : (n))

int main()
{
    printf("abs(%i) = %i\n", -123, ABSOLUTE_VALUE(-123));
    printf("abs(%i - %i) = %i\n", 10, 65, ABSOLUTE_VALUE(10 - 65));

    return 0;
}
