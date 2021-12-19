#include <stdio.h>

int main() {
    const int divisor = 2;
    int min, max, remider;

    divisor = 12;
    
    scanf("%d %d", &min, &max);
    
    if ( min % divisor != 0 ) {
        min += 1;
    }
    
    for ( ; min <= max; min += divisor ) {
        printf("%d\n", min);
    }

    return 0;
}