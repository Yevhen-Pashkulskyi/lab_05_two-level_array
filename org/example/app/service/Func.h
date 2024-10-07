#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

int random_num(int min, int max);


void print_arr(int arr[], int row_len);


void print_matrix(int **arr, int rows, int cols);


int **matrix(int row, int colum, int min, int max);


int **transpose(int **matrix, int row, int col);


int *sum_row(int **arr, int row, int col);

int search_max_arr(int *arr, int len);

// int *arr_created(int size, int min, int max);

// int count_row(int **matrix[]);
// int count_col(int **matrix[]);
#endif
