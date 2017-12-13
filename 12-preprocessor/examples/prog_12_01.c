//
// Program 12.1
// Introducing the #define Statement
//
// Code example from the book: Programming in C (4th Edition) by Stephen G. Kochan
//

#include <stdio.h>

#define YES    1
#define NO     0

// Function to dertermine if an integer is even

int isEven(int number)
{
    int answer;

    if (number % 2 == 0)
        answer = YES;
    else
        answer = NO;

    return answer;
}

int main()
{
    int isEven(int number);

    if (isEven(17) == YES)
        printf("yes ");
    else
        printf("no ");

    if (isEven(20) == YES)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
