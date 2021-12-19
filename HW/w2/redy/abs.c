/*
В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
Прочитать последовательность в массив.
Найти все отрицательные числа и заменить их положительными, равными по модулю.
Результирующий массив вывести в task.out.
Пример ввода

10
10 -20 30 40 -50 -60 70 80 90 -100

Пример вывода

10 20 30 40 50 60 70 80 90 100
*/


#include <stdio.h>

int intScan(FILE *in) {
    int result;
    
    fscanf(in, "%d", &result);
    return result;
}

void intWrite(FILE *out, int a) {
    fprintf(out, "%d ", a);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in);
    int array[size];
    int a;
    int last = size - 1;
    int i = 0;
    
    for ( ; i < last; i++ ) {
        a = intScan(in);
        if ( a < 0 ) {
            a *= -1;
        }
        array[i] = a;
        intWrite(out, a);
    }
    a = intScan(in);
    if ( a < 0 ) {
        a *= -1;
    }
    array[i] = a;
    fprintf(out, "%d\n", a);
    
    return 0;
}
