/*
Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Порядок строк обратный.
Размер считать с клавиатуры.
Пример ввода

2

Пример вывода

3 4
1 2
*/

#include <stdio.h>

int main() {
    int size, max, counter;
    
    scanf("%d", &size);
    max = size * size;
    counter = 0;
    
    for ( int i = 1; i <= size; i++ ) {
        for ( int j = 1; j < size; j++ ) {
            counter = max - size + j;
            printf("%d ", counter);
        }
        counter = counter + 1;
        printf("%d\n", counter);
        max = counter - size;
    }
    
    return 0;
}
