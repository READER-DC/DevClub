/*
Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
Вывести в консоль число, записанное в новой системе счисления.
В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.
Пример ввода

-255 16

Пример вывода

-FF 
*/
#include <stdio.h>

int numOfPower(int power, int base) {
    int result = 1;
    
    for ( int i = 1; i < power; i++ ) {
        result *= base;
    }
    return result;
}

int main() {
    int dec, base, power, answer;
    
    power = 0;
    
    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( int i = dec; i > 0; i /= base ) {
        power = power + 1;
    }
    for ( int i = power; i > 0; i-- ) {
        answer = dec / numOfPower(i, base);
        if ( answer > 9 ) {
            answer -= 10;
            printf("%c", answer+'A');
        } else {
            printf("%d", answer);
        }
        dec = dec % numOfPower(i, base);
    }
    printf("\n");
    
    return 0;
}


/*
Программа слишком медленная.
#include <stdio.h>

int main() {
    int dec, base, numOfPower, power, answer;
    
    power = 0;
    
    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( int i = 1; i <= dec; i *= base ) {
        power = power + 1;
        numOfPower = i;
    }
    for ( int i = 0; i < power; i++ ) {
        answer = dec / numOfPower;
        
        dec = dec % (numOfPower);
        if ( answer > 9 ) {
            printf("%c", answer+55);
        } else {
            printf("%d", answer);
        }
        numOfPower = numOfPower / base;
    }
    printf("\n");
    
    return 0;
}

*/


/* 

Программа слишком медленная.
#include <stdio.h>

int main() {
    int dec, base, bitwise, power, i, answer;
    
    power = 0;
    
    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( i = 1; i <= dec; i *= base ) {
        power = power + 1;
        bitwise = i;
    }
    for ( i = 0; i < power; i++ ) {
        answer = dec / bitwise;
        
        dec = dec % (bitwise);
        if ( answer > 9 ) {
            answer -= 10;
            printf("%c", answer+'A');
        } else {
            printf("%d", answer);
        }
        bitwise = bitwise / base;
    }
    printf("\n");
    
    return 0;
}
*/

/*
#include <stdio.h>

int main() {

    int dec, base, bitwise, power, i, answer;
    power = 0;

    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( i = 1 ; i <= dec; i = i * base) {
        power = power + 1;
        bitwise = i;
    }
    for ( i = 0; i < power; i++ ) {
        answer = dec/bitwise;
        
        dec = dec % (bitwise);
        if ( answer > 9 ) {
            printf ("%c", answer - 10 + 'A');
        } else {
            printf ("%d", answer);
        }
        bitwise = bitwise / base;
    }
    printf("\n");
    // printf("степень%d\n", power);
    // printf("максимально число  меньше N %d\n", bitwise);
    // printf("число в исчеслении %d\n", dec/bitwise);
    // printf("остаток отделения на макс стпень %d\n", dec % (bitwise/base));

    
    return 0;
}
*/






/*
#include <stdio.h>

int main() {

    int dec, base, bitwise, power, i, answer;
    power = 0;

    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( i = 1 ; i <= dec; i = i * base) {
        power = power + 1;
        bitwise = i;
    }
    for ( i = 0; i < power; i++ ) {
        answer = dec/bitwise;
        
        dec = dec % (bitwise);
        if ( answer > 9 ) {
            printf ("%c", answer - 10 + 'A');
        } else {
            printf ("%d", answer);
        }
        bitwise = bitwise / base;
    }
    printf("\n");
    // printf("степень%d\n", power);
    // printf("максимально число  меньше N %d\n", bitwise);
    // printf("число в исчеслении %d\n", dec/bitwise);
    // printf("остаток отделения на макс стпень %d\n", dec % (bitwise/base));

    
    return 0;
}
*/

