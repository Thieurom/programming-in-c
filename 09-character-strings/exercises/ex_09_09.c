// 
// Exercise 9.9
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[81] = { "this Is A Camel Case Phrase" };
    bool still_found;
    bool replace_string(char source[], const char s1[], const char s2[]);

    printf("Original text:\n");
    printf("\"%s\"\n", str);

    do {
        still_found = replace_string(str, " ", "");
    } while (still_found);

    printf("\nAfter removal of blank spaces:\n");
    printf("\"%s\"\n", str);

    return 0;
}

bool replace_string(char source[], const char s1[], const char s2[]) {
    int index, length;
    int string_length(const char str[]);
    int find_string(const char source[], const char search[]);
    void remove_string(char source[], const int start, const int length);
    void insert_string(char source[], const char insert[], int location);

    index = find_string(source, s1);
    length = string_length(s1);

    if (index != -1) {
        remove_string(source, index, length);
        insert_string(source, s2, index);

        return true;
    }

    return false;
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
