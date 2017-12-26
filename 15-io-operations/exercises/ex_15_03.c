// 
// Exercise 15.3
//
// Doan Thieu - 12/2017.
//


#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in[64], out[64];
    FILE *infile, *outfile;
    int c;

    printf("Enter name of file to be copied: ");
    scanf("%63s", in);

    if ((infile = fopen(in, "r")) == NULL) {
        printf("Can't open %s for reading.\n", in);
        exit(EXIT_FAILURE);
    }

    printf("Enter name of output file: ");
    scanf("%63s", out);

    if ((outfile = fopen(out, "w")) == NULL) {
        printf("Can't open %s for writing.\n", out);
        exit(EXIT_FAILURE);
    }

    while ((c = getc(infile)) != EOF)
        putc(toupper(c), outfile);

    fclose(infile);
    fclose(outfile);

    printf("File has been copied.\n");
    
    return EXIT_SUCCESS;
}
