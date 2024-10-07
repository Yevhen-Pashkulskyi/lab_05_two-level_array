#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

int const MIN = 2;
int const MAX = 5;

int run() {
    srand(time(NULL));

    // variable for two level array
    int row = random_num(MIN, MAX);
    int col = random_num(MIN, MAX);

    // посилання на функцію створення масиву
    int **matrixVar = matrix(row, col, MIN, MAX);
    if (matrixVar == NULL) {
        // perror("malloc");
        return -1;
    }
    print_matrix(matrixVar, row, col);

    int **transposeMatrix = transpose(matrixVar, row, col);
    // print_matrix(transposeMatrix, col, row);
    print_arr(sum_row(transposeMatrix,col,row), col);

    printf("max sum col = %d", search_max_arr(sum_row(transposeMatrix,col,row), col));

    free(matrixVar);
    free(transposeMatrix);
    return 0;
}
