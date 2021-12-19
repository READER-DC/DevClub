/*
void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size);
Столбец – первый индекс, строка – второй.)
*/



#include <stdio.h>
#define SIZE 4

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE];
    int decrement[SIZE][SIZE];
    matrixScan(in,matrix, 4);
    matrixPrint(out, matrix, 4);

    fclose (out);
    fclose (in);


    return 0;
}

/* 1/4 tests passed
void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            fscanf(in, "%d", &matrix[i][j]);
        }
    }
}
*/

/*

/*  1/4 tests passed
void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size && fscanf(in, "%d", &matrix[i][j]) == 1; j++ );
    }
}
*/
