/*
Вывести числовую пирамидку на total строк. Порядок строк – обратный.
В каждой строке числа идут от единицы до номера строки через пробел.
Пример ввода

3

Пример вывода

1 2 3
1 2
1
*/

#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int col = total; col > 0; col-- ) {
        for ( int row = 1; row < col; row++ ) {
            printf("%d ", row);
        }
        printf("%d\n", col);
    }
    
    return 0;
}


/*

*/



/*

хавает бендер

#include <stdio.h>

int main() {
    int total, counter;
    
    scanf("%d", &total);
    counter = 0;
    
    for ( int i = total; i > 0; i-- ) {
        for ( int j = i; j > 1; j-- ) {
            counter = i - j + 1;
            printf("%d ", counter);
        }
        printf("%d\n", i);
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int total, counter;
    
    scanf("%d", &total);
    counter = 0;
    
    for ( int i = 1; i <= total; i++ ) {
        for ( int j = i; j < total; j++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
        counter = 0;
    }
    
    return 0;
}

*/