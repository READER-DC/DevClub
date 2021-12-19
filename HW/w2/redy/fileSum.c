/*
Считать два числа из файла task.in.
Записать их сумму в файл task.out.
Пример ввода

10 20

Пример вывода

30
*/


#include <stdio.h>

int main() {
    int a, b, result;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d", &a);
    fscanf(in, "%d", &b);
    result = a + b;
    
    fprintf(out, "%d\n", result);
    
    return 0;
}
