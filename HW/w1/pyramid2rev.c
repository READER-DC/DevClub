/*
Вывести числовую пирамидку на total строк. Порядок строк – обратный.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.
Пример ввода

3

Пример вывода

4 5 6
2 3
1
*/

#include <stdio.h>

int main() {
    int total, row, max;
    
    max = 0;
    
    scanf("%d", &total);
    
    for ( int i = 1; i <= total; i++ ) {
        max = max + i;
    }
    
    for ( int i = total; i > 0; i-- ) {
        for ( int j = i - 1; j > 0; j-- ) {
            row = max - j;
            printf("%d ", row);
        }
        
        printf("%d\n", max);
        max = max - i;
    }
    
    return 0;
}
