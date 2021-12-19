#include <stdio.h>

void MatrixVarFill(int* matrix, const int row, const int col) {
	for ( int i = 0; i < row; i++) {
		for ( int j = 0; j < col; j++) {
			*(matrix + (i * col) + j) = i*(col) + (j+1);
		}
	}
}

void MatrixVarPrint(int* matrix, const int row, const int col) {
	int lastCol = col - 1;
	for ( int i = 0; i < row; i++) {
		for ( int j = 0; j < lastCol; j++) {
			printf("%d ", *(matrix + (i * col) + j));
		}
		printf("%d\n", *(matrix + (i * col) + lastCol));
	}
}


#define ROWS 10
#define COLS 5

void MatrixFill(int matrix[][COLS]) {
	for ( int row = 0; row < ROWS; row++) {
		for ( int col = 0; col < COLS; col++) {
			matrix[row][col] = row*(COLS) + (col+1);
		}
	}
}

void MatrixPrint(int matrix[][COLS]) {
	for ( int row = 0; row < ROWS; row++) {
		for ( int col = 0; col < COLS-1; col++) {
			printf("%d ", matrix[row][col] );
		}
		printf("%d\n", matrix[row][COLS-1] );
	}
}

int main() {
	int matrix[ROWS][COLS];

	int myMarix[ROWS*COLS];

	printf("sizeof(matrix)%d\n", sizeof(matrix));

	MatrixFill(matrix);
	MatrixPrint(matrix);

	MatrixVarFill(myMarix, ROWS, COLS);
	MatrixVarPrint(myMarix, ROWS, COLS);

	return 0;
}
