/*
Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
Данная задача решается без массивов.
Пример ввода

5
1 2 3 4 5

Пример вывода

1
*/
#include <stdio.h>

int main() {
    int size, number, min;
    
    scanf("%d %d", &size, &min);
    for ( int i = 1; i < size; i++ ) {
        scanf("%d", &number);
        if ( number < min ) {
            min = number;
        }
    }
    
    printf("%d\n", min);
    
    return 0;
}
