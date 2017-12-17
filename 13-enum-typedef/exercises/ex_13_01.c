// 
// Exercise 13.1
//
// Doan Thieu - 12/2017.
//


#include <stdio.h>

int one();
typedef int (*FunctionPtr)();

int main()
{
    FunctionPtr onep = one;
    
    printf("%i\n", onep());

    return 0;
}

int one()
{
    return 1;
}
