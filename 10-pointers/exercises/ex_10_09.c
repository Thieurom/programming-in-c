// 
// Exercise 10.9
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void readline(char *buffer) {
    char character;

    do {
        character = getchar();
        *buffer++ = character;
    } while (character != '\n');

    *(buffer--) = '\0';
}

int main() {
    int i;
    char *line;
    void readline(char *buffer);

    for (i = 0; i < 3; i++) {
        readline(line);
        printf("%s\n", line);
    }

    return 0;
}
