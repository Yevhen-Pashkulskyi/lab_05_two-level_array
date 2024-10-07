#include <stdlib.h>
// #include "../controller/Func.h"

int *sum_row(int **arr, int row, int col) {
    int *result = malloc(sizeof(int) * row);
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        result[i] = sum;
        sum = 0;
    }
    return result;
}

int **transpose(int **matrix, int row, int col) {
    int temp = row;
    row = col;
    col = temp;
    int **transposed = malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++) {
        transposed[i] = malloc(sizeof(int) * col);
        for (int j = 0; j < col; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
    return transposed;
}

int search_max_arr(int *arr, int len) {
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex + 1;
}

// int count_row(int **matrix) {
//     int result = 0;
//     for (int i = 0; matrix[i] != NULL; i++) {
//         result++;
//     }
//     return result;
// }
//
// int count_col(int **matrix[]) {
//     int result = 0;
//     for (int i = 0; matrix[i] != NULL; i++) {
//         for (int j = 0; matrix[i][j] != NULL; j++) {
//             result++;
//         }
//     }
//     return result;
// }