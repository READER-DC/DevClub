/*
Написать функцию:
void arrayShiftRight(int array[], int size)
Реализовать циклический сдвиг массива на 1 элемент вправо.
Использование дополнительного массива не разрешается.
*/


#include <stdio.h>

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
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

    fscanf(in, "%d", &needle);
    size = arrayScan(in, array, limit);
    arrayShiftLeft(array, size);

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}



/* 11 лишних инструкций
void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = array[i+1];
    }
    array[size-1] = temp;
}
*/