/*
void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);
*/



#include <stdio.h>
#define SIZE 4
void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for (int j = 0; j < size; j++) {
            target[i][j] = source[i][j];
        }
    }
}


void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier) {
    for( int row = 0; row < size; row++ ) {
        for( int col = 0; col < size; col++ ){
            matrix[row][col] *= multiplier;
        }
    }
}

void matrixFiell (int matrix[][SIZE]) {
    for ( int row = 0; row < SIZE; row++) {
        for ( int col = 0; col < SIZE; col++) {
            matrix[row][col] = row*col + (col);
        }
    }
}

void matrixPrint(int matrix[][SIZE]) {
    for ( int row = 0; row < SIZE; row++) {
        for ( int col = 0; col < SIZE-1; col++) {
            printf("%d ", matrix[row][col] );
        }
        printf("%d\n", matrix[row][SIZE-1] );
    }
}

void matrixIncrement(int matrix[SIZE][SIZE], int increment[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            matrix[row][col] = matrix[row][col] + increment[row][col];
        }
    }
}
void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}
void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}



int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE];
    int decrement[SIZE][SIZE];
    matrixScan(in,matrix, 4);
    matrixMultiply(matrix, 4, 10);
    matrixCopy(source, 4);
    matrixPrint(out, matrix, 4);
    // matrixPrint(matrix);

    
    // matrixFiell(matrix);
    // matrixPrint(matrix);
    // matrixDecrement(matrix,decrement, 4);
    // matrixPrint(decrement);

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
