// 
// Exercise 15.5
//
// Doan Thieu - 12/2017.
//


#include <stdlib.h>
#include <stdio.h>

int main()
{
    char filename[64];
    char buffer[80], *b;
    FILE *file;
    int m, n;

    printf("Enter name of file to be printed: ");
    scanf("%s63", filename);

    printf("Enter left column number: ");
    scanf("%i", &m);

    printf("Enter right column number: ");
    scanf("%i", &n);

    if (m < 0 || n < 0 || m > n) {
        printf("Invalid values of m/n.\n");
        exit(EXIT_FAILURE);
    }

    if ((file = fopen(filename, "r")) == NULL) {
        printf("Can't open %s for reading.\n", filename);
        exit(EXIT_FAILURE);
    }

    while ((b = fgets(buffer, 80, file)) != NULL) {
        printf("%.*s\n", n - m, b + m);
    } 

    fclose(file);

    return EXIT_SUCCESS;
}
