// 
// Exercise 7.9
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}


int lcm(int u, int v)
{
    return u * v / gcd(u, v);
}


int main(void)
{
    int u, v;

    printf("Enter 2 integers to calculate lcm: ");
    scanf("%i %i", &u, &v);

    if (u == 0 || v == 0) {
        printf("Both integers must not equal to zero\n");
        return -1;
    }

    printf("The least common multiple is %i\n", lcm(u, v));

    return 0;
}
