#ifndef LAB__DM_LAB20_H
#define LAB__DM_LAB20_H

#include <stdio.h>
#include "D:\lab__dm\libs\data_structures\matrix\matrix.h"

typedef struct domain{
    int visits_number;
    char *name;
} domain;

int** task_1(int n, int query[][4], size_t size);

void test_task_1();

int count_living_neighboring_cells(int m, int n, int board[m][n], int i, int j);

void task_2(int m, int n, int board[m][n]);

void test_task_2();

void get_median(int filter, int matrix[filter][filter], int i, int j);

void task_3(int filter, int matrix[filter][filter]);

void test_task_3();

void task_4(char **cpdomains, int size);

void test_task_4();

void fill_matrix(matrix m, matrix *new_matrix, int rows, int cols);

int task_5(matrix m, int rows, int cols);

void test_task_5();

void test_lab20();

#endif //LAB__DM_LAB20_H
