// 
// Exercise 11.8
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

void bitpat_set(unsigned int *source, unsigned int value, int start, int size);

int main() {
    unsigned int s = 0xe1f4u;

    printf("%x\n", s);
    bitpat_set(&s, 0xeeeu, 4, 12);
    printf("%x\n", s);

    return 0;
}

void bitpat_set(unsigned int *source, unsigned int value, int start, int size) {
    unsigned int copy;
    int mask = 0, i;
    int bits = 0, space;

    // we call the group of bits that is going to be set set-field

    // calculate the meaningful bits of the source
    // i.e the number of bits of an int minus the number of leading zeros of the source
    copy = *source;
    while (copy != 0) {
        copy >>= 1;
        bits++;
    } 

    // determine the `space` between the set-field and the right-most of the source
    space = bits - start - size;

    // create the mask
    for (i = 0; i < size; i++) {
        mask <<= 1;
        mask++;
    }
    mask <<= space;

    // prepare the value that will be used to set the source
    value <<= space;
    value &= mask;

    // set all the bits of the set-field of the source to 0
    mask = ~mask;
    *source &= mask;

    // to set
    *source |= value;
}
