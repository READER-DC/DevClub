/*
Условие задачи

void matrixDecrement(int matrix[SIZE][SIZE], int decrement[SIZE][SIZE], int size)
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

void matrixDecrement(int matrix[SIZE][SIZE], int decrement[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            matrix[row][col] = matrix[row][col] - decrement[row][col];
        }
    }
}


int main() {
    int matrix[SIZE][SIZE];
    int decrement[SIZE][SIZE];
    matrixFiell(matrix);
    matrixPrint(matrix);
    matrixDecrement(matrix,decrement, 4);
    matrixPrint(decrement);


    return 0;
}

