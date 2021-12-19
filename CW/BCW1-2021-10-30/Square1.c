/* 
Вывести числовой квадрат заданного размера.
В каждой строке числа идут с единицы через пробел.
Размер считать с клавиатуры.

Пример ввода
4
Пример вывода
1_2_3_4\
1_2_3_4\
1_2_3_4\
1_2_3_4\

*/

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            printf("%d_", col);
        }
        printf("%d\n", size);
    }
    
    return 0;
}
