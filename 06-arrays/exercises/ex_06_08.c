// 
// Exercise 6.8
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int size, i;

    do {
        printf("How many bits do you want?: ");
        scanf("%i", &size);

        if (size < 1 || size > 8)
            printf("Choose between 1 and 8.\n");

    } while (size < 1 || size > 8);

    int bits[size];

    for (i = 0; i < size; ++i) {
        bits[i] = 0;
        printf("bits[%i] = %i\n", i, bits[i]);
    }

    printf("Initialized all bits.\n");

    return 0;
}
