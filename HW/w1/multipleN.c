/*
Считать с клавиатуры целое неотрицательное число-максимум.
Считать с клавиатуры целый, не равный нулю делитель.
Вывести в строку числа от нуля до указанного максимума включительно, кратные заданному делителю.
Пример ввода

99 10

Пример вывода

0 10 20 30 40 50 60 70 80 90
*/
#include <stdio.h>

int main() {
    int initial, denominator;
    
    scanf("%d %d", &initial, &denominator);
    
    if ( denominator < 0 ) {
        denominator *= -1;
    }
    initial = initial - initial % denominator;
    
    for ( int i = 0; i < initial; i += denominator ) {
        printf("%d ", i);
    }
    printf("%d\n", initial);
    
    return 0;
}
