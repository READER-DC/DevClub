/*
Условие задачи

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

Поворот матрицы на 180 градусов по часовой стрелке.

*/

#include <stdio.h>
#define SIZE 4

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            int targetCol = size - row - 1;
            int targetRow = size - col - 1;
            
            target[row][col] = source[targetCol][targetRow];
        }
    }
}

// void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
//     for ( int i = 0; i < size; i++ ) {
//         for (int j = 0; j < size; j++) {
//             target[i][j] = source[i][j];
// ,bla 111111111
//         }
//     }
// }

// void matrixPrint(int matrix[SIZE][SIZE]) {
//     for ( int row = 0; row < SIZE; row++) {
//         for ( int col = 0; col < SIZE-1; col++) {
//             printf("%d ", matrix[row][col] );
//         }
//         printf("%d\n", matrix[row][SIZE-1] );
//     }
// }

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
            fprintf(out, "%d_", matrix[col][row]);
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
    matrixRotate180(decrement, matrix, 4);

    matrixPrint(out, decrement, 4);
    // matrixPrint(decrement);

    
    // matrixFiell(matrix);
    // matrixPrint(matrix);
    // matrixDecrement(matrix,decrement, 4);
    // matrixPrint(decrement);

    fclose (out);
    fclose (in);


    return 0;
}
