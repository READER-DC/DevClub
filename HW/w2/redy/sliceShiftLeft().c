/*
Написать функцию:
void sliceShiftLeft(int array[], int start, int end)
Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.
4/5 tests passed ===Start > end
*/


#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    if( start < end ) {
        int temp = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
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
    sliceShiftLeft(array, 8, 0);

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}
