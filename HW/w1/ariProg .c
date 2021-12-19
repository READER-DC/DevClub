/*
Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. Вывести в строку через пробел члены заданной прогрессии.
Задаваемое количество больше нуля.
Пример ввода

12 2 4

Пример вывода

12 14 16 18
*/

#include <stdio.h>

int main() {
    int min, step, size, next;
    
    scanf("%d %d %d", &min, &step, &size);
    
    next = min;
    for ( ; size > 1; size-- ) {
        printf("%d ", next);
        next = next + step;
    }
    printf("%d\n", next);
    
    return 0;
}
