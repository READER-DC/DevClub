/*
Условие задачи

unsigned int average(unsigned int a, unsigned int b)
Вернуть среднее арифметическое двух положительных целых чисел. Использовать только тип unsigned int.
Если среднее значение не является целым, то округлить его к ближайшему целому в меньшую сторону.
*/


#include <stdio.h>

unsigned int average(unsigned int a, unsigned int b) {
    return a / 2 + b / 2 + (a % 2 + b % 2) / 2;
}




int main() {
    unsigned int a, b;


    scanf("%u %u", &a, &b);
    printf("%u\n", average(a, b) );

    return 0;
}



/*
unsigned int average(unsigned int a, unsigned int b) {
    if ( a % 2 == 1 && b % 2 == 1 ) {
        return a / 2 + b / 2 + 1;
    }
    return a / 2 + b / 2;
}
*/