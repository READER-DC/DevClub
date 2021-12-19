/*
Считать с клавиатуры целое положительное число.
Вывести в строку все нечётные числа от нуля до указанного числа включительно.
Пример ввода

9

Пример вывода

1 3 5 7 9
*/
#include <stdio.h>

int main() {
    int initial;
    
    scanf("%d", &initial);
    
    if ( initial % 2 == 0 ) {
        initial -= 1;
    }
    
    for ( int i = 1; i < initial; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", initial);
    
    return 0;
}
