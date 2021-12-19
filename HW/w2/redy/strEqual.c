/*
В файле task.in заданы две строки длиной не более 100 символов каждая.
Если строки равны, вывести в task.out слово "yes" - иначе вывести "no".
Пример ввода

hello
hello

Пример вывода

yes
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size1, size2, i;
    int limit = 100;
    char str1[limit];
    char str2[limit];
    
    fscanf(in, "%100s", str1);
    fscanf(in, "%100s", str2);
    
    for ( size1 = 0; str1[size1] != 0; size1++ );
    for ( size2 = 0; str1[size2] != 0; size2++ );
    if ( size1 != size2 ) {
        fprintf(out, "no\n");
        i = size1 + 1;
    }
    for ( i = 0; str1[i] == str2[i] && i < size1; i++ );
    if ( str1[i] != str2[i] ) {
        fprintf(out, "no\n");
    } else {
        fprintf(out, "yes\n");
    }
    
    return 0;
}
