#include <stdio.h>

/* (left) && (right) */

/* left       right     result
    0           0         0
    1           0         0
    0           1         0
    1           1         1 */

/* (left) || (right) */

/* left       right     result
    0           0         0
    1           0         1
    0           1         1
    1           1         1 */

int main() {
    int a;

    scanf("%d", &a);

    if ( a > 0 && a % 10 == 0 ) {
        printf("EPIC WIN\n");
    } else {
        printf("EPIC FAIL\n");
    }

    if ( a % 2 == 0 || a % 7 == 0 ) {
        printf("OLOLOLO\n");
    } else {
        printf("TROLOLO\n");
    }

    if ( !(a % 2 == 0) ) {
        printf("NOT MULTIPLE 2\n");
    }
    
    return 0;
}
