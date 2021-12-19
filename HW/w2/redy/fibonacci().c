/*
int fibonacci(int n)
Использовать рекурсию.
*/


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
    int result;
    result = factorial(14);

    printf("%llu\n", result);

    return 0;
}

