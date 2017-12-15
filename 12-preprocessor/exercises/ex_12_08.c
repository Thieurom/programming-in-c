// 
// Exercise 12.8
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define IS_LOWER_CASE(c)    (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c)    (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c)    (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

#define IS_DIGIT(c)         (((c) >= '0') && ((c) <= '9'))
#define IS_SPECIAL(c)       ((!IS_ALPHABETIC(c)) && (!IS_DIGIT(c)))

int main()
{
    printf("%i\n", IS_DIGIT('5'));
    printf("%i\n", IS_DIGIT('f'));

    printf("%i\n", IS_SPECIAL('c'));
    printf("%i\n", IS_SPECIAL('$'));

    return 0;
}
