/*
Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.
Пример ввода

3

Пример вывода

1 2 4 8
*/
#include <stdio.h>

int main() {
    int degree, result;
    
    scanf("%d", &degree);
    
    result = 1;
    for ( int i = 0; i < degree; i++ ) {
        printf("%d ", result);
        result = result * 2;
    }
    printf("%d\n", result);
    
    return 0;
}


/* ответ!!!!
#include <stdio.h>

int main() {
    int degree, result;
    
    scanf("%d", &degree);
    
    result = 1;
    for ( int i = 0; i < degree; i++ ) {
        printf("%d ", result);
        result = result * 2;
    }
    printf("%d\n", result);
    
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int powerOf2, result;
    
    scanf("%d", &powerOf2);
    
    result = 1;
    for ( int i = 0; i < powerOf2; i++ ) {
        printf("%d ", result);
        result = result * 2;
    }
    printf("%d\n", result);
    
    return 0;
}
*/





/*
#include <stdio.h>

void pow2(int x) {
    int result = 1;
    
    if ( x >= 1 ) {
        printf("%d ", 1);
        for ( int i = 1; i < x; i++ ) {
            result = result * 2;
            printf("%d ", result);
        }
        printf("%d\n", result*2);
    } else {
        printf("%d\n", 1);
    }
}

int main() {
    int powerOf2;
    
    scanf("%d", &powerOf2);
    
    pow2(powerOf2);
    
    return 0;
}
*/
