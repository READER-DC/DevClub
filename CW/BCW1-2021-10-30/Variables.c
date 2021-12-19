#include <stdio.h>

int main() {
    int myInt = 42;
    short myShort = 32771;
    unsigned short myUnsignedShort = 65535;

    printf("int: %d\n", myInt);
    printf("short: %hd\n", myShort);
    printf("unsigned short: %hu\n", myUnsignedShort);

    printf("int: %d\n", sizeof(int));
    printf("short: %d\n", sizeof(short));
    printf("unsigned short: %d\n", sizeof(unsigned short));

    printf("int: %llu\n", &myInt);
    printf("short: %llu\n", &myShort);
    printf("unsigned short: %llu\n", &myUnsignedShort);

    return 0;
}