/*
int arrayScan(FILE *in, int array[], int limit)
Считать из файла in не более limit элементов в массив array.
Вернуть количество считанных элементов.

*/

#include <stdio.h>
int arrayScan(FILE *in, int array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%d", &array[length]) == 1; length++ );
    return length;
}



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
    int limit = 15;
    int array[limit-1];
    printf("%d\n", arrayScan(in, array, limit));
    arrayPrint(out, array, limit);
    
    return 0;
}


/*

int arrayScan(FILE *in, int array[], int limit) {
    int counter = 0;
    
    for ( int i = 0; i < limit && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        counter += 1;
    }
    return counter;
}
*/