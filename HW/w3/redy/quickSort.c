/*
Условие задачи

В файле task.in дано число len и массив размером len элементов.
Отсортировать элементы в порядке неубывания.
Использовать алгоритм quickSort.
Результат записать в task.out
code works
*/

#include <stdio.h>

#define LIMIT 500

int partition(int array[], int start, int end) {
    int mid = (start + end) / 2;
    int pivot;
    int idPivot = start;
    int idArray = start;

    pivot = array[mid];
    array[mid] = array[end];
    array[end] = pivot;
    for ( ; idArray < end; idArray++ ) {
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
void quickSort (int array[], int start, int end) {
    int idPivot;
    
    if ( start >= end ) {
        return;
    }
    idPivot = partition(array, start, end);
    quickSort(array, start, idPivot-1);
    quickSort(array, idPivot+1, end) ;
    
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
    int src[LIMIT];
    int len;
    int start = 0;
    int end; 
    
    fscanf(in, "%d", &len);
    end = len - 1;
    
    arrayScan(in, src, len);
    
    quickSort(src, start, end);
    arrayPrint(out, src, len);
    
    fclose(out);
    fclose(in);
    
    return 0;
}

