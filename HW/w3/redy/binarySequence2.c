/*
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

#define LIMIT 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = 0;
    int count = 0;
    char a;
    
    for ( int i = 0; fscanf(in, "%c", &a) == 1; i++ ) {
        if ( a != '1' ) {
            count += 1;
        }
    }
    rewind(in);
    for ( int i = 0; i < count; i++ ) {
        fscanf(in, "%c", &a);
        if ( a != '1' ) {
            len += 1;
        }
    }
    fprintf(out, "%d\n", count-len);
    fclose(out);
    fclose(in);
    
    return 0;
}
