// 
// Exercise 11.5
//
// Doan Thieu - 12/2017.
//

#include <stdio.h>

int main() {
    int bit_test(unsigned int number, unsigned int n);
    int bit_set(unsigned int number, unsigned int n);
    int int_size();
    int size_i = int_size();
    int righ_most = size_i - 1;

    unsigned int number = 42;  // 101010

    printf("%u\n", bit_test(number, righ_most));
    printf("%u\n", bit_set(number, righ_most));

    return 0;
}

int bit_test(unsigned int value, unsigned int n) {
    int int_size();
    
    if ((value & (1 << (int_size() - 1 - n))) == 0)
        return 0;

    return 1;
}

int bit_set(unsigned int value, unsigned int n) {
    int int_size();

    return value | (1 << (int_size() - 1 - n));
}

int int_size() {
    int i = ~0, size = 0;

    while (i != 0) {
        i <<= 1;
        size++;
    }

    return size;
}
