#include <stdio.h>

int main() {
    FILE* output = fopen("task.out", "w");
    FILE* input = fopen("task.in", "r");

    int size;
    int value;

    if ( input == NULL ) {
        printf("EPIC FAIL\n");
    }

    fscanf(input, "%d", &size);

    for ( int i = 0, last = size - 1; i < last; i++ ) {
        fscanf(input, "%d", &value);
        fprintf(output, "%d ", value );
    }

    fscanf(input, "%d", &value);
    fprintf(output, "%d\n", value );

    fclose(output);
    fclose(input);

    return 0;
}