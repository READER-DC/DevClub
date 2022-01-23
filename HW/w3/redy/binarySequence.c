/*
Условие задачи

В файле task.in дана последовательность символов – нулей и единиц.
Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания последовательности по неубыванию.
Пример ввода

1101

Пример вывода

1

Пояснение

Необходимо обменять ноль с первой единицей.
code works
*/

#include <stdio.h>

#define LIMIT 500

int arrayScan(FILE *in, char array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%c", &array[length]) == 1; length++ );
    return length;
}

int binarySequence(char array[], int len) {
    int count = 0;
    int countZero = 0;
    
    for ( int i = 0; i < len; i++ ) {
        if ( array[i] == '0' ) {
            count += 1;
        }
    }
    for ( int i = 0; i < count; i++ ) {
        if ( array[i] == '0' ) {
            countZero += 1;
        }
    }
    return count - countZero;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char src[LIMIT];
    int len = LIMIT;
    int n = 0;
    
    len = arrayScan(in, src, len);
    n = binarySequence(src, len);
    fprintf(out, "%d\n", n);
    
    fclose(out);
    fclose(in);
    
    return 0;
}
