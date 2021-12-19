/*
Считать в массив последовательность чисел длиной 10 из файла task.in.
Записать его через пробел в файл task.out.
Пример ввода

10 20 30 40 50 60 70 80 90 100

Пример вывода

10 20 30 40 50 60 70 80 90 100
*/

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 10;
    int array[size-1];
    
    for ( int i = 0; i < size - 1; i++ ) {
        fscanf(in, "%d", &array[i]);
        fprintf(out, "%d ", array[i]);
    }
    fscanf(in, "%d", &array[size]);
    fprintf(out, "%d\n", array[size]);
    return 0;
}

/*
#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 10;
    int array[size-1];
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
        fprintf(out, "%d ", array[i]);
    }
    return 0;
}
*/