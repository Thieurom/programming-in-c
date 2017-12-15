// 
// Exercise 12.7
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define IS_LOWER_CASE(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

int main()
{
    printf("%i\n", IS_ALPHABETIC('c'));
    printf("%i\n", IS_ALPHABETIC('9'));

    return 0;
}
