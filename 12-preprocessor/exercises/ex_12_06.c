// 
// Exercise 12.6
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))

int main()
{
    printf("%i\n", IS_UPPER_CASE('c'));
    printf("%i\n", IS_UPPER_CASE('C'));

    return 0;
}
