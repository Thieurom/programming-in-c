// 
// Exercise 7.13
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

void sort(int array[], int n, int asc)
{
    int i, j, temp;

    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (asc) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
            else {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
}


void display_array(int array[], int n)
{
    int i;

    for (i = 0; i < n; ++i)
        printf("%i  ", array[i]);

    printf("\n");
}


int main(void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
        44, -3, -9, 12, 17, 22, 6, 11 };
    void sort(int array[], int n, int asc);

    printf("The array before the sort:\n");
    display_array(array, 16);

    sort(array, 16, 1);

    printf("\nThe array atter the sort in ascending order:\n");
    display_array(array, 16);

    sort(array, 16, 0);

    printf("\nThe array atter the sort in descending order:\n");
    display_array(array, 16);

    return 0;
}
