/*
void arrayPrint(FILE *out, int array[], int size)
Функция должна вывести элементы массива через пробел, завершив вывод символом перевода строки.
*/

#include <stdio.h>
void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 10;
    int array[size-1];
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }


    // fscanf(in, "%d", &array[size]);
    // fprintf(out, "%d\n", array[size]);
    arrayPrint(out, array, size);
    return 0;
}
