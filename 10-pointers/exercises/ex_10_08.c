// 
// Exercise 10.8
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void sort3(int *x, int *y, int *z) {
    void swap(int *x, int *y);

    if (*x > *y)
        swap(x, y);

    if (*x > *z)
        swap(x, z);

    if (*y > *z)
        swap(y, z);
}


void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a, b, c;
    void sort3(int *x, int *y, int *z);

    a = 100;
    b = 300;
    c = 200;

    printf("%i, %i, %i\n", a, b, c);

    sort3(&a, &b, &c);

    printf("%i, %i, %i\n", a, b, c);

    return 0;
}
