/*
int intScan(FILE *in)
Считать число из файла и вернуть его.
*/


#include <stdio.h>

int intScan(FILE *in) {
    int result;

    fscanf(in, "%d", &result);
    return result;
}

int main() {
    FILE* in = fopen("W2.txt", "r");

    int value = intScan(in);

    printf("%d\n", value);
    
    return 0;
}