#include <stdio.h>

int main() {
    int a;
    int indicator = 0;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        indicator = 1;
        printf("alpha\n");
    }

    if ( a % 3 == 0 ) {
        indicator = 1;
        printf("bravo\n");
    }

    if ( a % 5 == 0 ) {
        indicator = 1;
        printf("charlie\n");
    }
    
    if ( indicator == 0 ) {
        printf("zulu\n");
    }
    return 0;
}
