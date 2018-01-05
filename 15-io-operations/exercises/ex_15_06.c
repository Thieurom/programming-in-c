// 
// Exercise 15.6
//
// Doan Thieu - 01/2018.
//


#include <stdlib.h>
#include <stdio.h>

#define NUM_LINES  20

int main()
{
    char name[64], buffer[80], c;
    FILE *file;
    int i;

    printf("Enter name of file: ");
    scanf("%63s", name);

    if ((file = fopen(name, "r")) == NULL) {
        printf("Can't open %s.\n", name);
        exit(EXIT_FAILURE);
    }

    i = 0;
    while (fgets(buffer, 80, file) != NULL) {
        printf("%s", buffer);
        i++;

        if (i == NUM_LINES) {
            while ((c = getchar()) == '\n')
                ;

            if (c == 'q')
                break;
            else
                i = 0;
        }
    }

    fclose(file);

    return EXIT_SUCCESS;
}
