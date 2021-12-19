#include <stdio.h>

#define SIZE_A 20
#define SIZE_B 9

// int array[], int* array

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i] );
    }

    printf("%d\n", array[last]);
}

void arrayFill(int* array, int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = i;
    }
}

void arrayZeroFill(int* array, int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0; // *(array + i) = 0;
    }
}

int main() {
    int b[SIZE_B];
    int a[SIZE_A]; // 0..3

    arrayZeroFill(a, SIZE_A);
    arrayZeroFill(b, SIZE_B);

    // a[1]; // 4..7
    // a[2]; // 8..11
    // a[3]; // 12..15

    arrayFill(a, SIZE_A);
    arrayPrint(a, SIZE_A);

    arrayFill(&b[6], SIZE_B-6);
    arrayPrint(&b[6], SIZE_B-6);
    arrayPrint(&b[0], SIZE_B);

    for ( int i = 0; i < SIZE_B; i++ ) {
        printf("&b[%d] = %llu\n", i, &b[i]);
    }

    return 0;
}