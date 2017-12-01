// 
// Exercise 11.3
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

int int_size() {
    int i = ~0, bits = 0;

    while (i != 0) {
        i <<= 1;
        bits++;
    }

    return bits;
}


int main() {
    int int_size();

    printf("Number of bits contained in an integer in this computer: %i\n", int_size());

    return 0;
}
