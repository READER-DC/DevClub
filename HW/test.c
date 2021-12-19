#include <stdio.h>

int main() {
    int a, shift, result, min, max;
    
    scanf("%d", &a);
    
    for ( int i = 0, min = 0, max = 32; i < 6; i++ ) {
        result = 0;
        shift = (min / 2 + max / 2);
        result = 1 << shift;
        
        if ( result > a ) {
            max = shift;
        } else {
            min = shift;
        }
    }
    if ( result == a ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}



/*
#include <stdio.h>

int main() {
    int degree;
    
    scanf("%d", &degree);
    for ( int i = degree; i >= 1; i /= 2 ) {
        printf("%d\n", i);
        if ( i % 2 != 0 && i != 1 ) {
            printf("no\n");
            i = 0;
        } else {
            printf("yes\n");
        }
    }
    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int a, shift, result, min, max;
    min = 0;
    max = 32;
    
    scanf("%d", &a);
    // shift = 16;
    
    for ( int i = 1; i <= 33; i++ ) {
        printf("i = %d\n", i);
        shift = (min/2 + max/2);
        printf("max = %d\n", max/2);
        printf("min = %d\n", min/2);

        result = 1 << shift;
        
        if ( result > a ) {
            max = shift;
            // shift = shift/2;
            printf("shift = %d\n", shift);
        }
        if ( result < a ) {
            printf("result = %d\n", result);
            min = shift;
            // shift = shift + shift/2;
            // printf("shift = %d\n", shift);
        }
        if ( result == a ) {
            printf("result = %d\n", result);
            // printf("shift = %d\n", shift);
            printf("i = %d\n", i);
            printf("yes\n");
            return 0;
        }
        result = 0;
    }
    printf("no\n");
    
    return 0;
}
*/