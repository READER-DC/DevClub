#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 4;
    
    printf("a + b * c =%d\n", (a + b) * c );
    printf("a * b + c =%d\n", a * b + c );

    printf("a < b + c =%d\n", a < b + c );
    printf("a + b < c =%d\n", a + b < c );

    printf("a + b < c == 0 =%d\n", a + b < c == 0 );

    printf("%d\n", (2 + 2) * 2);

    printf("%d\n", 2 + 2 + 2);

    return 0;
}
