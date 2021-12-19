#include <stdio.h>

int intScan(FILE* out) {
    int result;

    fscanf(out, "%d", &result);

    return result;
}

int main() {
    FILE* out = fopen("task.in", "r");
    int size = intScan(out);
    int array[size];
    int last = size - 1;

    for ( int i = 0; i < size; i++ ) {
        array[i] = i;
    }

    for ( int i = 0; i < last; i++ ) {
        fprintf(stdout, "%d ", array[i]);
    }

    fprintf(stdout, "%d\n", array[last]);

    return 0;
}