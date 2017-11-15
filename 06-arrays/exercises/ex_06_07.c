// 
// Exercise 6.7
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int main(void)
{
    int primes[151], i, j; 

    for (i = 2; i <= 150; ++i)
        primes[i] = 0;

    for (i = 2; i <= 150; ++i) {
        if (primes[i] == 0) {
            printf("%i  ", i);
            
            for (j = 2; i * j <= 150; ++j)
                primes[i*j] = 1;
        }
    }

    printf("\n");

    return 0;
}
