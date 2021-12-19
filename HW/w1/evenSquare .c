/*
Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных чисел в промежутке от min до max включительно. В указанном промежутке гарантированно существует как минимум 1 парное число.
Пример ввода

0 7

Пример вывода

0 4 16 36
*/
#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min += 1;
    }
    max = max - max % 2;
    for ( ; min < max; min += 2 ) {
        printf("%d ", min*min);
    }
    printf("%d\n", min*min);
    
    return 0;
}
