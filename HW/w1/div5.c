/*
Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.
Пример ввода

0 15

Пример вывода

0
5
10
15
*/

#include <stdio.h>

int main() {
    int min, max, result;
    
    scanf("%d %d", &min, &max);
    
    result = min;
    min = min - min % 5;

    if ( result > min ) {
        min = min + 5;
    }
    for ( ; min <= max; min += 5 ) {
        printf("%d\n", min);
    }
    
    return 0;
}