// 
// Exercise 6.6
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int f1, f2, f3, i;

    f1 = 0;
    f2 = 1;

    for (i = 0; i < 15; ++i) {
        if (i == 0)
            f3 = f1;
        else if (i == 1)
            f3 = f2;
        else {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        
        printf("%i\n", f3);
    }

    return 0;
}
