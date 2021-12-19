#include <stdio.h>

int main() {
    int size, max, number;
    
    scanf("%d %d", &size, &max);
    
    for ( ; size > 1; size-- ) {
        scanf("%d", &number);
        if ( number > max ) {
            max = number;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
