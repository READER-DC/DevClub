/*
Написать функцию:
void arrayReverse(int array[], int size)

Использование дополнительного массива не разрешается.
*/


#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int next = 0, end = size - 1; next < end; next++, end-- ) {
        int temp = array[next];
        
        array[next] = array[end];
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

    fscanf(in, "%d", &needle);
    size = arrayScan(in, array, limit);
    arrayReverse(array, size);

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}
