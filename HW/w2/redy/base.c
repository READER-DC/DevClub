/*
Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
Вывести в консоль число, записанное в новой системе счисления.
Задача решается без массивов.
Пример ввода

8 3

Пример вывода

22

как правильно выводить 25 3 ===FIX
правильно 221               ===FIX
у меня  122                 ===FIX
Программа слишком медленная.
*/


#include <stdio.h>

void base_f(int dec, int base) {
    if ( dec / base != 0 ) {
        base_f(dec/base, base);
    }
    printf("%d", dec%base);
}

int main() {
    int dec, base;
    
    scanf("%d %d", &dec, &base);
    
    base_f(dec, base);
    
    printf("\n");
    
    return 0;
}



/*
#include <stdio.h>

int main() {
    int dec, base, a;
    
    scanf("%d %d", &dec, &base);
    a = 1;
    
    for ( int i = 0; a < dec; i++ ) {
        a = a * base;
        if ( a * base > dec ) {
            printf("%d", dec/a);
            dec = dec % a;
            i = 0;
            a = 1;
        }
    }
    printf("%d\n", dec%base);
    
    return 0;
}

*/
