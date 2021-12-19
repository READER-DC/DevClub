/*
Написать функцию:
void arraySort(int array[], int size)
Отсортировать элементы в порядке неубывания.
Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.
8 9 7 3 2 6 5 1 4 10

1 8 9 7 3 2 6 5 4 10
1 2 8 9 7 3 6 5 4 10
1 2 3 8 9 7 6 5 4 10
1 2 3 4 8 9 7 6 5 10
1 2 3 4 5 8 9 7 6 10
1 2 3 4 5 6 8 9 7 10
1 2 3 4 5 6 7 8 9 10

2/5 tests passed
*/


#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    int temp = array[end];
    
    for ( int i = end; i > start; i-- ) {
        array[i] = array[i-1];
    }
    array[start] = temp;
}

void arraySort(int array[], int size) {
    int index;
    int minElemet;
    
    for ( int start = 0; start < size; start++ ) {
        minElemet = array[start];
        for ( int j = start; j < size; j++ ) {
            if ( array[j] < minElemet ) {
                minElemet = array[j];
                index = j;
            }
        }
        if ( minElemet < array[start] ) {
            for ( int i = index; i > start; i-- ) {
                array[i] = array[i-1];
            }
            array[start] = minElemet;
        }
    }
}





int arrayScan(FILE *in, int array[], int limit) {
    int len = 0;
    
    for ( ; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}
int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size, needle, limit;
    limit = 99;
    int array[limit];

    // fscanf(in, "%d", &needle);
    size = arrayScan(in, array, limit);
    array[size];
    arraySort(array, size);

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}
