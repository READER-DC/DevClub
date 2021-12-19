/*
Считать с клавиатуры целое положительное число, вывести на экран количество всех делителей этого числа.
Пример ввода

12

Пример вывода

6
*/

#include <stdio.h>

int main() {
    int element, cheker;
    
    cheker = 0;
    
    scanf("%d", &element);
    for ( int i = 1; i <= element; i++ ) {
        if ( element % i == 0 ) {
            cheker = cheker + 1;
        }
    }
    printf("%d\n", cheker);
    
    return 0;
}

