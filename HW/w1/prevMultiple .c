/*
Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
Вывести на экран наибольшее число, кратное делителю, не превышающее делимое.
Пример ввода

15 6

Пример вывода

12
*/
#include <stdio.h>

int main() {
    int initial, denominator, result;
    
    scanf("%d %d", &initial, &denominator);
    if ( denominator < 0 ) {
        denominator *=-1;
    }
    result = initial - initial % denominator;
    printf("result = %d\n", result );
    if ( result > initial ) {
        result = result - denominator;
    }
    
    printf("%d\n", result);
    
    return 0;
}
