// 
// Exercise 7.12b
//
// Doan Thieu - 11/2017.
//

#include <stdio.h>

int result[5][4];

int main(void)
{
    void transpose_matrix(int n_rows, int n_cols, int matrix[n_rows][n_cols]);
    void display_matrix(int n_rows, int n_cols, int matrix[n_rows][n_cols]);
    int sample_matrix[4][5] = {
        { 10,  5, -3, 17, 12 },
        { 12, 10, 52,  0,  7 },
        { -2,  1,  2,  4,  9 },
        {  0,  0,  8,  7,  6 }
    };

    printf("Original matrix:\n");
    display_matrix(4, 5, sample_matrix);

    transpose_matrix(4, 5, sample_matrix);

    printf("\nTransposed matrix:\n");
    display_matrix(5, 4, result);

    return 0;
}


void transpose_matrix(int n_rows, int n_cols, int matrix[n_rows][n_cols])
{
    int i, j;

    for (i = 0; i < n_cols; ++i)
        for (j = 0; j < n_rows; ++j)
            result[i][j] = matrix[j][i];
}


void display_matrix(int n_rows, int n_cols, int matrix[n_rows][n_cols])
{
    int i, j;

    for (i = 0; i < n_rows; ++i) {
        for (j = 0; j < n_cols; ++j)
            printf("%5i", matrix[i][j]);

        printf("\n");
    }
}
