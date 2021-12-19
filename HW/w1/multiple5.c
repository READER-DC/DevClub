/*
Считать с клавиатуры целое положительное число.
Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.
Пример ввода

17

Пример вывода

0 5 10 15
*/
#include <stdio.h>

int main() {
    int initial;
    
    scanf("%d", &initial);
    
    initial = initial - initial % 5;
    
    for ( int i = 0; i < initial; i += 5 ) {
        printf("%d ", i);
    }
    printf("%d\n", initial);
    
    return 0;
}
