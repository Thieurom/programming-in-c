// 
// Exercise 15.4
//
// Doan Thieu - 12/2017.
//


#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name1[64], name2[64];
    char buffer[80], *b;
    FILE *file1, *file2, *current;

    printf("Enter name of first file: ");
    scanf("%63s", name1);

    if ((file1 = fopen(name1, "r")) == NULL) {
        printf("Can't open %s for reading.\n", name1);
        exit(EXIT_FAILURE);
    }

    printf("Enter name of second file: ");
    scanf("%63s", name2);

    if ((file2 = fopen(name2, "r")) == NULL) {
        printf("Can't open %s for reading.\n", name2);
        exit(EXIT_FAILURE);
    }

    current = file1;

    while ((b = fgets(buffer, 80, current)) != NULL) {
        printf("%s", b);
        current = (current == file1 ? file2 : file1);
    }

    while ((b = fgets(buffer, 80, file1)) != NULL)
        printf("%s", b);

    while ((b = fgets(buffer, 80, file2)) != NULL)
        printf("%s", b);

    fclose(file1);
    fclose(file2);

    return EXIT_SUCCESS;
}
