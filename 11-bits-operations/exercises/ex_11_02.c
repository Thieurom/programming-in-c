// 
// Exercise 11.2
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

int main() {
    int i = -1;

    if (i == i >> 1)
        printf("Arithmetic right shift.\n");
    else
        printf("Logical right shift.\n");

    return 0;
}
