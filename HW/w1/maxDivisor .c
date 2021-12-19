/*
Считать с клавиатуры целое положительное число. Вывести на экран наибольший его нетривиальный делитель. В случае неопределенности вывести 0.

Пример ввода
12
Пример вывода
6
*/
#include <stdio.h>

int main() {
    int dividen;
    int maxDiv = 0;
    
    scanf("%d", &dividen);
    
    for ( int i = 2; i < dividen; i++ ) {
        if ( dividen % i == 0 ) {
            maxDiv = i;
        }
    }
    printf("%d\n", maxDiv);
    
    return 0;
}
