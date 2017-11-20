// 
// Exercise 9.8
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[81] = { "C is 1 of the most powerful programming languages." };
    int index, length;
    int string_length(const char str[]);
    int find_string(const char source[], const char search[]);
    void remove_string(char source[], const int start, const int length);
    void insert_string(char source[], const char insert[], int location);

    printf("Before replacement:\n");
    printf("\"%s\"\n", str);

    index = find_string(str, "1");
    length = string_length("1");

    if (index != -1) {
        remove_string(str, index, length);
        insert_string(str, "one", index);
    }

    printf("\nAfter replacement:\n");
    printf("\"%s\"\n", str);

    return 0;
}

int string_length(const char str[]) {
    int length = 0;

    while (str[length] != '\0')
        length++;

    return length;
}


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


void remove_string(char source[], const int start, const int length) {
    int i;

    for (i = start; source[i] != '\0'; i++)
        source[i] = source[i + length];

    source[i] = '\0';
}


void insert_string(char source[], const char insert[], int location) {
    int i, j;
    char after[81];

    // extract the text after inserted location from source into new array
    for (i = location, j = 0; source[i] != '\0'; i++, j++)
        after[j] = source[i];

    after[j] = '\0';

    // copy inserted string to original, start at given location, overwrite exist
    for (i = location, j = 0; insert[j] != '\0'; i++, j++)
        source[i] = insert[j];

    // append the above extracted to the end
    for (j = 0; after[j] != '\0'; i++, j++)
        source[i] = after[j];

    source[i] = '\0';
}
