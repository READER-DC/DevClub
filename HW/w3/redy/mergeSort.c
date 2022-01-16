/*
Условие задачи

В файле task.in дано число len и массив размером len элементов.
Отсортировать элементы в порядке неубывания.
Использовать алгоритм mergeSort.
Результат записать в task.out
Допустимо использование рекурсии.

компилит но Бендеру не подходит строки 77 и 78
*/

#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int length = hi - lo;
    int target[length];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            target[k] = array[i];
            i += 1;
        } else {
            target[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++ , k++ ) {
        target[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        target[k] = array[j];
    }
    for ( int i = lo, k = 0; i < hi; i++, k++ )
    {
        array[i] = target[k];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (hi + lo) / 2 ;

    if ( mid == lo ) {
        return ;
    }

    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
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
    mergeSort(src, 0, len);
    arrayPrint (out, src, len);

    fclose (out);
    fclose (in);

    return 0;
}


/* code works = мне не нравится строка 154!!!
#include <stdio.h>

#define LIMIT 100

void merge(int array[], int lo, int mid, int hi) {
    int length = hi - lo;
    int target[length];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            target[k] = array[i];
            i += 1;
        } else {
            target[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        target[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        target[k] = array[j];
    }
    for ( int i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = target[k];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (hi + lo) / 2;
    
    if ( mid == lo ) {
        return;
    }
    
    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
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
    int src[LIMIT];
    
    fscanf(in, "%d", &len);
    
    arrayScan(in, src, len);
    mergeSort(src, 0, len);
    arrayPrint(out, src, len);
    
    fclose(out);
    fclose(in);
    
    return 0;
}
*/