// 
// Exercise 7.8
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


void quadratic(const float a, const float b, const float c)
{
    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        printf("Equation has the imaginary roots.\n");
    else if (discriminant == 0)
        printf("Equation has a double root: %g\n", -b / (2 * a));
    else {
        printf("Equation has two distinct roots:\n");
        printf("  x1 = %g\n", (-b + square_root(discriminant)) / (2 * a));
        printf("  x2 = %g\n", (-b - square_root(discriminant)) / (2 * a));
    }
}


int main(void)
{
    float a, b, c;

    printf("Program to solve a quadratic equation: ax^2 + bx + c = 0\n");

    printf("  a = ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Wrong quadratic form: a must not be 0.\n");
        return -1;
    }

    printf("  b = ");
    scanf("%f", &b);

    printf("  c = ");
    scanf("%f", &c);

    quadratic(a, b, c);

    return 0;
}
