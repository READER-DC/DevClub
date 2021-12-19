/*
В файле task.in дана строка длиной не более 100 символов.
Прочитать строку в память и произвести ее реверс.
Результат вывести в task.out.
Пример ввода

hello

Пример вывода

olleh
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 0;
    int limit = 100;
    char str[limit];
    
    fscanf(in, "%100s", str);
    for ( ; str[size] != 0; size++ );
    for ( int start = 0, end = size - 1; start < end; start++, end-- ) {
        char temp = str[start];
        
        str[start] = str[end];
        str[end] = temp;
    }
    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
    return 0;
}
