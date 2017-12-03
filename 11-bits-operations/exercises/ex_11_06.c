// 
// Exercise 11.6
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

int bitpat_search(unsigned int source, int pattern, int n);

int main() {
    unsigned int s = 0xe1f4u;

    printf("%i\n", bitpat_search(s, 0x5, 3));

    return 0;
}

int bitpat_search(unsigned int source, int pattern, int n) {
    int source_bits = 0, index = 0, position = -1;
    int mask = 0, i;

    for (i = 0; i < n; i++) {
        mask <<= 1;
        mask++;
    }

    while (source != 0) {
        if ((source & mask) == pattern)
            position = index;

        index++;
        source_bits++;
        source >>= 1;
    }

    if (position >= 0)
        position = source_bits - position - n;

    return position;
}
