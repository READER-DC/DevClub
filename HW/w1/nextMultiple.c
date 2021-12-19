/*
Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
Вывести на экран наименьшее число, кратное делителю, не меньшее делимого.
Пример ввода

15 6

Пример вывода

18
*/
#include <stdio.h>

int main() {
    int initial, denominator, result;
    
    scanf("%d %d", &initial, &denominator);
    if ( denominator < 0 ) {
        denominator *= -1;
    }
    result = initial - initial % denominator;
    if ( result < initial ) {
        result = result + denominator;
    }
    
    printf("%d\n", result);
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     int initial, denominator;
    
//     scanf("%d %d", &initial, &denominator);
    
//     initial = initial - initial % denominator;
    
//     for ( int i = 0; i < initial; i += denominator ) {
//         printf("%d ", i);
//     }
//     printf("%d\n", initial);
    
//     return 0;
// }


// int main() {
//     int initial, denominator;
    
//     scanf("%d %d", &initial, &denominator);
    
//     initial = initial - initial % denominator;
    
//     for ( int i = 0; i < initial ; i += denominator*2 ) {
//         printf("%d %d %d ", i, i+denominator, i+denominator*2 );
//         i = i+denominator ;
//     }
//     printf("%d\n", initial);
    
//     return 0;
// }
