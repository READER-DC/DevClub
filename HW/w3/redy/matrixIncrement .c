/*
Условие задачи

void matrixIncrement(int matrix[SIZE][SIZE], int increment[SIZE][SIZE], int size)
*/



#include <stdio.h>
#define SIZE 4

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



int main() {
    int matrix[SIZE][SIZE];
    int increment[SIZE][SIZE];
    matrixFiell(matrix);
    matrixFiell(increment);
    matrixPrint(matrix);
    matrixIncrement(matrix,increment, 4);
    matrixPrint(decrement);


    return 0;
}

