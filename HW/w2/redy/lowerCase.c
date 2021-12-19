/*
В файле task.in дана последовательность символов.
Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out
Пример ввода

ABCD

Пример вывода

abcd
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str;
    
    for ( ; fscanf(in, "%c", &str) == 1; ) {
        if ( str >= 'A' && str <= 'Z' ) {
            str = str - 'A' + 'a';
        }
        fprintf(out, "%c", str);
    }
    
    fprintf(out, "\n");
    
    return 0;
}

