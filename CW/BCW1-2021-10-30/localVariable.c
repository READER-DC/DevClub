#include <stdio.h>

void natural(int limit) {
    int i;
    
    limit *= 2;

    for ( i = 1; i < limit; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", i);
}

int max2(int a, int b) {
    if ( a > b ) {
        return a;
    }
    // return b;
}

void increment(int *value) { // 0064FEC0
    *value += 1;
}

int main() {
    int size, result, number;
    
    scanf("%d %d", &size, &number);
    
    for ( int i = 0; i < size; i++ ) {
        int x = 42;

        natural(size);
    }

    result = max2(size, number);

    printf("result = %d\n", result);

    printf("&number = %p\n", &number);
    printf("number = %d\n", number);
    printf("increment(number)\n");
    increment(&number);
    printf("number = %d\n", number);
    
    return 0;
}
