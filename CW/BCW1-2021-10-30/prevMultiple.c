/* Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
Вывести на экран наибольшее число, кратное делителю, не превышающее делимое. */

#include <stdio.h>

int main() {
    int dividend, divisor, result;

    scanf("%d %d", &dividend, &divisor);

    if ( divisor < 0 ) {
        divisor *= -1;
    }

    result = dividend - dividend % divisor;

    if ( result > dividend ) {
        result -= divisor;
    }

    printf("dividend - dividend %% divisor = %d - %d %% %d\n", dividend, dividend, divisor);
    printf("dividend %% divisor = %d\n", dividend % divisor);

    printf("%d\n", result);
    
    return 0;
}
