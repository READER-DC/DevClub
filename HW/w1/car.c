// Считать с клавиатуры 2 целых положительных числа - скорость движения автомобиля и 
// ограничение по скорости. Проверить, нарушает ли водитель автомобиля
// правило ограничения скорости. Если нарушает, 
// вывести в консоль "violation", если не нарушает — вывести «ok».
#include <stdio.h>

int main() {
    int speed, limitSpeed;

    scanf("%d %d", &speed, &limitSpeed);

    if ( speed > limitSpeed ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }
    
    return 0;
}
