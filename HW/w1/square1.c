/*
Вывести числовой квадрат заданного размера.
В каждой строке числа идут с единицы через пробел.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
1 2
1 2.
*/
#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    for ( int row = 1; row <= size; row++ ) {
        for ( int column = 1; column < size; column++ ) {
        printf("%d ", column);
    }
    printf("%d\n", size);
    }
    
    return 0;
}
