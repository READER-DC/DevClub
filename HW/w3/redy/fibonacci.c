/*
Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
Пример ввода
8
Пример вывода
21
code works
*/
#include <stdio.h>

int fibonacci(int n) {
    int result = 0;
    if ( n == 1 ) {
        return 1;
    }
    for ( int i = 1, b = 0, a = 1; i < n; i++ ) {
        result = a + b;
        b = a;
        a = result;
    }
    return result;
}

int main() {
    int result = 1;
    int n;
    int p;
    int x = 1;
    
    scanf("%d", &n);
    p = n;
    if ( n < 0 ) {
        p *= -1;
    }
    if ( p <= 46 ) {
        result = fibonacci(p);

        if ( n < 0 && n % 2 == 0 ) {
            x = -1;
        }
        printf("%d\n", result*x);
    }
    return 0;
}


/* 9/17 tests passed
#include <stdio.h>

int main() {
    int result = 1;
    int n;
    int p;
    int x = 1;
    int i = 1;
    
    scanf("%d", &n);
    p = n;
    if ( n < 0 ) {
        p *= -1;
    }
    if ( p > 46 ) {
        i = p + 1;
    }
    for ( int b = 0, a = 1; i < p; i++ ) {
        result = a + b;
        b = a;
        a = result;
    }
    if ( n < 0 && n % 2 != 0 ) {
        x = -1;
    }
    
    printf("%d\n", result*x);
    return 0;
}
*/

/* Программа слишком медленная.
#include <stdio.h>

int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    
    if ( n == 1 ) {
        return 1;
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}


int main() {
    int n;
    int result;

    scanf("%d", &n);

    if ( n < 47 && n > -47 ) {
    result = fibonacci(n);
    printf("%d\n", result);
    }

    return 0;
}

*/