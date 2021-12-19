#include <stdio.h>

void printBits(unsigned char num, int base, int capacity) {
    if ( capacity > 0 ) {
        printBits(num/base, base, capacity-1);
        printf("%d", num%base);
    }
}

//<< >>

// |, &, ^
// ~

int main() {
    int number = 33;
    int mask = 165;

    printBits(number, 2, 8);
    printf("\n");

    number = number << 1; // number * 2^n, n = 1

    printBits(number, 2, 8);
    printf("\n");

    number = number >> 4;

    printBits(number, 2, 8);
    printf("\n");

    printf("\n");
    printf("\n");

    printBits(number, 2, 8);
    printf("\n&\n");
    printBits(mask, 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(number & mask, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");


    printBits(233, 2, 8);
    printf("\n&\n");
    printBits(89, 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(233 & 89, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");


    printBits(233, 2, 8);
    printf("\n|\n");
    printBits(89, 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(233 | 89, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");

    printBits(233, 2, 8);
    printf("\n^\n");
    printBits(89, 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(233 ^ 89, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    int value = 83;

    printBits(value, 2, 8);
    value = value | (1 << 5);
    printf("\n|\n");
    printBits((1 << 5), 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(value, 2, 8);
    printf("\n");
    printf("~value\n");
    printBits(~value, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    value = 33;

//     00100001
// &   11011111


    printBits(value, 2, 8);
    value = value & ~(1 << 5);
    printf("\n&\n");
    printBits(~(1 << 5), 2, 8);
    printf("\n");
    printf("_________\n");
    printBits(value, 2, 8);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}
