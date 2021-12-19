#include <stdio.h>

#define DIV 10
#define SIZE 99

int main() {
    int min, max, remider;
    
    scanf("%d %d", &min, &max);
    
    if ( min % DIV != 0 ) {
        min += 1;
    }
    
    for ( ; min <= max; min += DIV ) {
        printf("%d\n", min);
    }

    return 0;
}