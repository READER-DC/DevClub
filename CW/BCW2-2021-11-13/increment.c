#include <stdio.h>

int main() {
    FILE* output = fopen("task.out", "w");
    FILE* input = fopen("task.in", "r");
    int value;
    char str[64];

    if ( input == NULL ) {
        printf("EPIC FAIL\n");
    }

    for ( ; fscanf(input, "%d", &value) == 1; ) {
        fprintf(stdout, "%d ", value+1);
        fflush(stdout);
    }

    fscanf(stdin, "%s", str);
    fprintf(stdout, "%s", str);

    fclose(output);
    fclose(input);

    return 0;
}