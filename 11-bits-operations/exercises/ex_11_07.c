// 
// Exercise 11.7
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

int bitpat_get(unsigned int source, unsigned int position, int count);

int main() {
    unsigned int s = 0xe1f4u;

    printf("%i\n", bitpat_get(s, 8, 4));

    return 0;
}

int bitpat_get(unsigned int source, unsigned int position, int count) {
    unsigned int copy = source;
    int bits = 0;
    int mask = 0, i;

    // create the mask
    for (i = 0; i < count; i++) {
        mask <<= 1;
        mask++;
    }

    // calculate the number of meaningful bits of source
    while (copy != 0) {
        bits++;
        copy >>= 1;
    }

    source >>= (bits - position - count);

    return source & mask;
}
