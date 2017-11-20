// 
// Exercise 9.6
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void remove_string(char source[], const int start, const int length) {
    int i;

    for (i = start; source[i] != '\0'; i++)
        source[i] = source[i + length];

    source[i] = '\0';
}

int main() {
    char str[] = { "the wrong son" };
    void remove_string(char source[], const int start, const int length);

    printf("Original string: %s\n", str);

    remove_string(str, 4, 6);
    printf("After removing 6 characters from index of 4: %s\n", str);

    return 0;
}
