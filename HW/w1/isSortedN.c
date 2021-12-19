/*
Считать с клавиатуры положительную длину числовой последовательности и саму последовательность. Проверить, упорядочена ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в противном случае вывести «no».
Пример ввода

5
-20 -15 0 12 15

Пример вывода

yes
*/

#include <stdio.h>

int main() {
    int size, min, elements, cheker;
    
    cheker = 0;
    scanf("%d %d", &size, &min);
    for ( int i = 1; i <= size - 1; i++ ) {
        scanf("%d", &elements);
        if ( min <= elements ) {
            min = elements;
        } else {
            i = size + 1;
            cheker = cheker + 1;
        }
    }
    if ( cheker != 0 ) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    
    return 0;
}
