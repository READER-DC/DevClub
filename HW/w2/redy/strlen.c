/*
В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
Прочитать строку в память и подсчитать ее длину.
Результат вывести в task.out.
Пример ввода

hello

Пример вывода

5
0/5 tests passed
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size;
    int limit = 100;
    char str[limit];
    
    fscanf(in, "%100s", str);
    
    for ( size = 0; str[size] != 0; size++ );
    fprintf(out, "%d\n", size);
    return 0;
}
