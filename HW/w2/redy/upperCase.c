/*
В файле task.in дана последовательность символов.
Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out
Пример ввода

abcd

Пример вывода

ABCD
4/7 tests passed
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str;
    
    for ( ; fscanf(in, "%c", &str) == 1; ) {
        if ( str >= 'a' && str <= 'z' ) {
            str = str - 'a' + 'A';
        }
        fprintf(out, "%c", str);
    }
    
    fprintf(out, "\n");
    
    return 0;
}


/*
#include <stdio.h>

void strUpperCase(char str[]) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int strLen(char str[]) {
    int index = 0;
    
    for ( ; str[index] != 0; index++ );
    return index;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int limit = 250;
    char str[limit];
    
    for ( int i = 0; fscanf(in, "%c", &str[i]) == 1 && i < limit; i++ );
    
    strUpperCase(str);
    
    for ( int i = 0; i < strLen(str); i++ ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
    
    return 0;
}
*/