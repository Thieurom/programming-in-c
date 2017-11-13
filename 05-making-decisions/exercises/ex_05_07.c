// 
// Exercise 5.7
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, d;
    bool is_prime;

    for (p = 2; p <= 50; ++p) {
        if (p > 2 && p % 2 == 0)
            continue;

        is_prime = true;
        for (d = 2; d < p && is_prime; ++d)
            if (p % d == 0)
                is_prime = false;

        if (is_prime)
            printf("%i  ", p);
    }

    printf("\n");

    return 0;
}
