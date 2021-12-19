/*
Считать min, max. Вывести в столбик чётные числа от min до max включительно.
Пример ввода

0 8

Пример вывода

0
2
4
6
8
*/

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min += 1;
    }
    
    for ( ; min <= max; min += 2 ) {
        printf("%d\n", min);
    }
    
    return 0;
}
