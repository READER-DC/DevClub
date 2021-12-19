/*
Считать с клавиатуры целые числа min, max и положительный делитель. Вывести в столбик числа, кратные делителю, от min до max включительно.
Пример ввода

0 8 2

Пример вывода

0
2
4
6
8
*/
#include <stdio.h>

int main() {
    int min, max, result, check;
    
    scanf("%d %d %d", &min, &max, &result);
    
    check = min;
    min = min - min % result;
    
    if ( check > min ) {
        min = min + result;
    }
    for ( ; min <= max; min += result ) {
        printf("%d\n", min);
    }
    
    return 0;
}
