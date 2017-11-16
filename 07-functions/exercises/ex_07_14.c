// 
// Exercise 7.14
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
    44, -3, -9, 12, 17, 22, 6, 11 };

int main(void)
{
    int i;
    void sort(int asc);
    void display_array(void);

    printf("The array before the sort:\n");
    display_array();

    sort(1);

    printf("\nThe array atter the sort in ascending order:\n");
    display_array();

    sort(0);

    printf("\nThe array atter the sort in descending order:\n");
    display_array();

    return 0;
}


void sort(int asc)
{
    int i, j, temp;

    for (i = 0; i < 15; ++i)
        for (j = i + 1; j < 16; ++j)
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


void display_array(void)
{
    int i;

    for (i = 0; i < 16; ++i)
        printf("%i  ", array[i]);

    printf("\n");
}
