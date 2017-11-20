// 
// Exercise 9.13
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void uppercase(char str[]) {
    int i;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] += 'A' - 'a';
        }
}


int main() {
    char str[] = { "Programming in C" };

    printf("Original: %s\n", str);
    uppercase(str);

    printf("Capitalized: %s\n", str);

    return 0;
}
