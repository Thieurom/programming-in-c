// 
// Exercise 9.7
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void insert_string(char source[], const char insert[], int location) {
    int i, j;
    char after[20];

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

int main() {
    char str[81] = { "the wrong son" };
    void insert_string(char source[], const char insert[], int location);

    printf("Original string: %s\n", str);

    insert_string(str, "per", 10);

    printf("After inserting: %s\n", str);

    return 0;
}
