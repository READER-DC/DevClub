/*
Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
1 2
3 4
*/
#include <stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    for ( int row = 1, counter = 1; row <= size; row++ ) {
        for ( int column = 1; column < size; column++ ) {
        printf("%d ", counter++);
        // printf("%d ", counter);
        // counter +=1;
    }
    printf("%d\n", counter++);
    // printf("%d ", counter);
    // counter +=1;
    }
    
    return 0;
}
