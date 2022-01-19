/*
Условие задачи

int partition(int array[], int start, int end)

В качестве опорного элемента брать среднее арифметическое между start и end с округлением вниз.
code works
*/

#include <stdio.h>

int partition(int array[], int start, int end) {
    int mid = (start + end) / 2;
    int pivot;
    int idPivot = start;
    int idArray = start;

    pivot = array[mid];
    array[mid] = array[end];
    array[end] = pivot;
    for ( ; idArray <= end; idArray++ ) {
        if ( array[idArray] < array[end] ) {
            pivot = array[idArray];
            array[idArray] = array[idPivot];
            array[idPivot] = pivot;
            idPivot += 1;
        }
    }
    pivot = array[idPivot];
    array[idPivot] = array[end];
    array[end] = pivot;
    return idPivot;
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
    int len;
    fscanf(in, "%d", &len);
    int src[len];

    arrayScan(in, src, len);
    arrayPrint (out, src, len);
    int a = partition(src,0, 9);
    printf("%d\n", a);
    arrayPrint (out, src, len);

    fclose (out);
    fclose (in);

    return 0;
}


