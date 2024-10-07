#include <stdio.h>
/**
 * Функція роздруковує масив
 */
void print_arr(int arr[], int row_len) {
    for (int i = 0; i < row_len; i++) {
        printf("%4d ", arr[i]);
    }
    printf("\n");
}

void print_matrix(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
