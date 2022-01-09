/*
void bubbleSort(int array[], int size)
code works
*/

#include <stdio.h>
#define LIMIT 500

void bubbleSort(int array[], int size) {
    int tmp;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            if ( array[i] < array[j] ) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}


void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d_", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int arrayScan(FILE *in, int array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%d", &array[length]) == 1; length++ );
    return length;
}



int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int src1[LIMIT];
    int src2[LIMIT];
    int target[LIMIT];
    int len1;
    int len2;

    len1 = arrayScan(in, src1, LIMIT);
    arrayPrint(out, src1, len1);


    int z = arrayUnique(src1, len1);
    arrayPrint (out, src1, len1);
    fprintf(out, "%d\n", z);


    fclose (out);
    fclose (in);


    return 0;
}


/* 3/7 tests passed
int arrayUnique(int array[], int size) {
    int length = 0;
    int tmp;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            if ( array[i] > array[j] ) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] != array[i+1] ) {
            length = length + 1;
        }
    }
    return length;
}
*/

/* Делаю то что не надо делать! Проверить может это надо бендеру?
int arrayUnique(int array[], int size) {
    int length = 1;
    int tmp;
    for ( int i = 0; i < size; i++ ) {
        for (int j = 0; j < size; j++ ) {
            if ( array[i] < array[j] ) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++ ) {
        for (int j = i+1; j < size; j++ ) {
            if ( array[i] != array[j] && array[i] < array[j]) {
                array[i+1] = array[j];
                j = size;
            }
        }
    }
    for ( int i = 0; array[i] < array[i+1]; i++ ) {
            length = length + 1;
    }
    array[length];
    return length;
}
*/