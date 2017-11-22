// 
// Exercise 10.7
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void sort(int *array, const int n) {
    int temp, *i, *j;

    for (i = array; i < array + n - 1; i++)
        for (j = i + 1; j < array + n; j++)
            if (*j < *i) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
}

void display_array(int *array, const int n) {
    int * const array_end = array + n;

    for (  ; array < array_end; array++)
        printf("%i ", *array);

    printf("\n");
}


int main() {
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
        44, -3, -9, 12, 17, 22, 6, 11 };
    void sort(int *array, const int n);
    void display_array(int *array, const int n);

    printf("The array before the sort:\n");
    display_array(array, 16);

    sort(array, 16);

    printf("\nThe array after the sort:\n");
    display_array(array, 16);

    return 0;
}
