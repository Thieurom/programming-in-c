// 
// Exercise 9.4
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void substring(const char source[], int start, int count, char result[]) {
    int i = start, j = 0;

    while (source[i] != '\0' && j < count) {
        result[j] = source[i];
        i++;
        j++;
    }

    result[j] = '\0';
}

int main() {
    const char str1[] = { "character" };
    const char str2[] = { "two words" };
    char str3[20];
    void substring(const char source[], int start, int count, char result[]);

    substring(str1, 4, 3, str3);
    printf("substring for str1: %s\n", str3);

    substring(str2, 4, 20, str3);
    printf("substring for str2: %s\n", str3);

    return 0;
}
