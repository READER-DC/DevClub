#include <stdio.h>

int main() {
    int a, b, c, d, max;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    max = a;
    if ( max < b ) {
        max = b;
    }
    if ( max < d ) {
        max = d;
    }
    if ( max < c ) {
        max = c;
    }
    printf("%d\n", max);
    
    return 0;
}