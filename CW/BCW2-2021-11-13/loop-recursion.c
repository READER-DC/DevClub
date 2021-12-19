#include <stdio.h>

int fibonacci_cache[46] = {0};
int fibonacci_counter = 0;

int fibonacci(int n) {
    fibonacci_counter += 1;

    if ( n == 0 ) {
        return 0;
    }

    if ( n == 1 ) {
        return 1;
    }

    if ( fibonacci_cache[n] != 0 ) {
        return fibonacci_cache[n];
    } else {
        fibonacci_cache[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return fibonacci_cache[n];
}

int fibonacci_raw_counter = 0;

int fibonacci_raw(int n) {
    fibonacci_raw_counter += 1;

    if ( n == 0 ) {
        return 0;
    }

    if ( n == 1 ) {
        return 1;
    }

    return fibonacci_raw(n-1) + fibonacci_raw(n-2);
}

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int fibonacci_loop(int n) {
    int result = 1;
    int b = 0;
    int a = 1;

    if ( n > 0 ) {
        for ( int i = 1; i < n; i++ ) {
            result = a + b;
            b = a;
            a = result;
        }
    }

    return result;
}

int main() {
    // printf("%d\n", fibonacci(46));
    // printf("%d\n", fibonacci_counter);
    //printf("%d\n", fibonacci_loop(46));

    //arrayPrint(fibonacci_cache, 46);
    // printf("%d ", fibonacci(4));
    // printf("counter %d\n", fibonacci_counter);
    // printf("%d ", fibonacci(4));
    // printf("counter %d\n", fibonacci_counter);
    // printf("%d ", fibonacci(2));
    // printf("counter %d\n", fibonacci_counter);
    // printf("%d ", fibonacci(10));
    // printf("counter %d\n", fibonacci_counter);
    // printf("%d ", fibonacci(20));
    // printf("counter %d\n", fibonacci_counter);

    printf("%d ", fibonacci_raw(40));
    printf("counter %d\n", fibonacci_raw_counter);

    //arrayPrint(fibonacci_cache, 46);


}