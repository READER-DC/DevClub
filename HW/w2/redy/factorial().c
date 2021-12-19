/*
int factorial(int n)
Использовать рекурсию.
В случае неопределенности возвращать -1.
epic win
*/


#include <stdio.h>
int factorial(int n) {
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }
    return n * factorial(n-1);
}




int main() {
    
    int N;
    scanf("%d", &N);
    printf("%d\n", factorial(N)); 
    printf("%d\n", counter);

    return 0;
}

/*  Программу нужно оптимизировать. Лишние инструкции: 12.
int factorial(int n) {
    if ( n < 0 ) {
        return -1;
    }
    if ( n <= 1 ) {
        return 1;
    }
    
    return n * factorial(n-1);
}
*/


/*
int factorial(int n) {
    if ( n > 0 ) {
        return factorial(n-1) * n;
    } else if ( n == 0 ) {
        return 1;
    } else {
        return -1;
    }
}
*/

/*

int counter = 0;
int factorial(int n) {
    if ( return factorial(n-1) * n == 0 && n >= 0 ) {
        return 1;
    } 
    return -1;
    
}
*/
