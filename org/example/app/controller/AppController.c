#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../service/Func.h"

// змінні для матриці та випадкового числа
int const MIN = 2;
int const MAX = 15;

int run() {
    srand(time(NULL));

    // змінні для матриці
    int row = random_num(MIN, MAX);
    int col = random_num(MIN, MAX);

    // посилання на функцію створення матриці
    int *matrixVar = matrix(row, col, MIN, MAX);
    if (matrixVar == NULL) {
        return -1;
    }
    print_matrix(matrixVar, row, col); // друк матриці

    // створив транспоновану матрицю для легшого розрахунку колонок
    int *transposeMatrix = transpose(matrixVar, row, col);
    int *max_col = sum_row(transposeMatrix, col, row);
    //сума кожної колонки
    print_arr(max_col, col);
    // перша максимальна колонка
    printf("\nНомер столбця з максимальною сумою №%d\n", search_max_arr(max_col, col));
    // очищення пам'яті яка була виділена для масивів
    free(matrixVar);
    free(transposeMatrix);
    free(max_col);
    return 0;
}
