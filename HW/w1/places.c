/*
Считать с клавиатуры целое число.
Вывести на экран количество знакомест, нужных для вывода этого числа.
Пример ввода

123

Пример вывода

3
*/


#include <stdio.h>

int main() {
    int num, counter;
    
    scanf("%d", &num);
    if ( num < 0 ) {
        counter = 2;
        num *= -1;
    } else {
        counter = 1;
    }
    
    for ( int i = 10; i <= num; i *= 10 ) {
        if ( num / i >= 1 ) {
            counter += 1;
        }
    }
    
    printf("%d\n", counter);
    
    return 0;
}
