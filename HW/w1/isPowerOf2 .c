/*
Считать с клавиатуры целое положительное число. Если число является целой степенью двойки, вывести "yes", иначе вывести "no".
Пример ввода

8

Пример вывода

yes
*/

#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    for ( int i = 1; i <= a; i *= 2 ) {
        if ( i == a ) {
            printf("yes\n");
        }
        if ( i * 2 > a && a != i ) {
            printf("no\n");
        }
    }
    
    return 0;
}
