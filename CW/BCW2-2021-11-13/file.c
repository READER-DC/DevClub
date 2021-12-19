#include <stdio.h>

int main() {
    FILE* output = fopen("output.txt", "w");
    FILE* input = fopen("input.txt", "r");
    FILE* myFile;
    int result;
    int status;

    printf("%llu\n", myFile);
    fprintf(myFile, "Hello world");

    if ( input == NULL ) {
        printf("INPUT EPIC FAIL\n");
        return -1;
    }

    if ( output == NULL ) {
        printf("OUTPUT EPIC FAIL\n");
        return -1;
    }

    status = fscanf(input, "%d", &result);

    if ( status != 1 ) {
        printf("READ ERROR\n");
        return -1;
    } else {
        printf("%d\n", result);
    }

    fclose(output);
    fclose(input);
    fprintf(output, "Hello world");
    printf("END\n");

    return 0;
}