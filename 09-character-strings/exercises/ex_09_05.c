// 
// Exercise 9.5
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int find_string(const char source[], const char search[]) {
    int i, j;
    bool found;

    for (i = 0; source[i] != '\0'; i++) {
        found = true;

        for (j = 0; search[j] != '\0'; j++) {
            if (search[j] != source[i + j]) {
                found = false;
                break;
            }
        }

        if (found)
            return i;
    }

    return -1;
}

int main() {
    int index;
    int find_string(const char source[], const char search[]);

    index = find_string("a chatterbox", "hat");

    if (index != -1)
        printf("Found at index of %i\n", index);
    else
        printf("Not found.\n");

    return 0;
}
