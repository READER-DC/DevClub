/*
Считать с клавиатуры целые числа min и max. Вывести в строку кубы всех нечетных чисел в промежутке от min до max включительно. В указаном промежутке гарантированно существует минимум одно нечетное число.
Пример ввода

0 7

Пример вывода

1 27 125 343
*/
#include <stdio.h>

int main() {
    int min, max, result;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( ; min < max; min += 2 ) {
        if ( min != 0 ) {
            result = min * min * min;
            printf("%d ", result);
        }
    }
    result = min * min * min;
    printf("%d\n", result);
    
    return 0;
}
