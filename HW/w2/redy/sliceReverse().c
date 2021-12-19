/*
Написать функцию:
void sliceReverse(int array[], int lo, int hi)
Осуществить реверс части массива от lo до hi включительно.
Программу нужно оптимизировать. Лишние инструкции: 4.
*/


#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
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
    sliceReverse(array, 3, 9);

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}


/*
void sliceReverse(int array[], int lo, int hi) {
    for ( int next = lo, end = hi; next < end; next++, end-- ) {
        int temp = array[next];
        
        array[next] = array[end];
        array[end] = temp;
    }
}
*/