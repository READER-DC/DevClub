/*
Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.
Пример ввода

0 9

Пример вывода

0
3
6
9
*/

#include <stdio.h>

int main() {
    int min, max, result;
    
    scanf("%d %d", &min, &max);
    
    result = min;
    min = min - min % 3;
    if ( result > min ) {
        min = min + 3;
    }
    for ( ; min <= max; min += 3 ) {
        printf("%d\n", min);
    }
    
    return 0;
}

