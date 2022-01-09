/*
void selectSort(int array[], int size)
code works

*/

#include <stdio.h>
#define LIMIT 500

void selectSort(int array[], int size) {
    int min;
    
    for ( int i = 0; i < size; i++ ) {
        min = array[i];
        for ( int j = i; j < size; j++ ) {
            if ( array[j] < min ) {
                min = array[j];
                array[j] = array[i];
                array[i] = min;
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


    selectSort(src1, len1);
    arrayPrint (out, src1, len1);


    fclose (out);
    fclose (in);


    return 0;
}
