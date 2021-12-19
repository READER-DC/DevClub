/*
int powerOf2(int exponent)
Возвести 2 в данную целую неотрицательную степень.
Воспользоваться побитовыми операциями.

*/


#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}

int main() {
    int a;
    
    scanf("%d", &a);
    printf("%d\n", powerOf2(a));
    
    return 0;
}
