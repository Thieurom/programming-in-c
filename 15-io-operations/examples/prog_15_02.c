//
// Program 15.2
// A Simple Example
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//


// Taking a single number and outputing several calculations

#include <stdio.h>

main()
{
    float d = 6.5;
    float half, square, cube;

    half = d / 2;
    square = d * d;
    cube = d * d * d;

    printf("\nYour number is %.2f\n", d);
    printf("Half of it is %.2f\n", half);
    printf("Square it to get %.2f\n", square);
    printf("Cube it to get %.2f\n", cube);

    return 0;
}
