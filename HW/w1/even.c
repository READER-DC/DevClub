/*
Считать с клавиатуры целое положительное число.
Вывести в строку все чётные числа от нуля до указанного числа включительно.
Пример ввода

7

Пример вывода

0 2 4 6
*/
#include <stdio.h>

int main() {
    int initial;
    
    scanf("%d", &initial);
    
    if ( initial % 2 != 0 ) {
        initial -= 1;
    }
    
    for ( int i = 0; i < initial; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", initial);
    
    return 0;
}
