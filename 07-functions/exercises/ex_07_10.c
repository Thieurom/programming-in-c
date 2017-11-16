// 
// Exercise 7.10
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

double absolute_value(double x)
{
    if ( x < 0 )
        x = -x;

    return x;
}

double square_root(double x)
{
    const double epsilon = .00001;
    double guess = 1.0;

    while (absolute_value((guess * guess / x) - 1) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int prime(int n)
{
    int i;

    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    for (i = 3; i <= square_root(n); i = i + 2)
        if (n % i == 0)
            return 0;

    return 1;
}


int main(void)
{
    int n, is_prime;

    printf("Enter a positive integer: ");
    scanf("%i", &n);

    is_prime = prime(n);

    if (is_prime)
        printf("%i is a prime number\n", n);
    else
        printf("%i is not a prime number\n", n);

    return 0;
}
