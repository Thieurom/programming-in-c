// 
// Exercise 13.3
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

int main()
{
    float f = 1.00;
    short int i = 100;
    long int l = 500L;
    double d = 15.00;

    printf("%f\n", f + i);
    printf("%f\n", l / d);
    printf("%f\n", i / l + f);
    printf("%li\n", l * i);
    printf("%f\n", f / 2);
    printf("%f\n", i / (d + f));
    printf("%f\n", l / (i * 2.0));
    printf("%f\n", l + i / (double) l);

    return 0;
}
