/*
Написать функцию:
int isPrime(int n)
Проверить, является ли данное число простым.
*/

#include <stdio.h>

int isPrime(int n) {
    int counter = 0;
    
    if ( n <= 1 ) {
        return 0;
    }
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 ) {
            counter = counter + 1;
        }
        if ( counter > 0 ) {
            return 0;
        }
    }
    
    return 1;
}



int main() {
    int base;
    
    
    scanf("%d", &base);

    printf("%d\n", isPrime(base));
    

    
    return 0;
}

