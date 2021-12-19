#include <stdio.h>

int main() {
    int a = 512;
    int b = 52;

    printf("a + b = %d\n", a + b);  // a + b = 55
    printf("a - b = %d\n", a - b);  // a - b = 29
    printf("a / b = %d\n", a / b);  // a / b = 3
    printf("a * b = %d\n", a * b);  // 
    printf("a %% b = %d\n", a % b); // a  b = 3

    printf("%d\n", 10 % 5);
    printf("%d\n", 9 % 4);
    printf("%d\n", 801 % 100);

    return 0;
}