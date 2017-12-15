// 
// Exercise 12.10
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

#define printx(n)    printf("%i\n", x##n)

int main()
{
    int x1 = 1, x2 = 3, x3 = 5, x4 = 10, x5 = 17;

    /* doesn't work
    int i;
    for (i = 1; i <= 5; i++)
        printx(i);
    */

    printx(1);
    printx(2);
    printx(3);
    printx(4);
    printx(5);

    return 0;
}
