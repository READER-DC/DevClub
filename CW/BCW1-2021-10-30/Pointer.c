#include <stdio.h>

int main() {
    int value = 0xAA;
    int number = 0xBB;  // <----+
                        //      |
    int *pointer;       //------+
    long long* p = ((char*)&number) - 2;

    pointer = &number;

    printf("&value %p\n", &value);
    printf("&number %p\n", &number);
    printf("&pointer %p\n", &pointer);

    printf("number %d\n", number);
    printf("value %d\n", value);
    printf("pointer %p\n", pointer);

    printf("number %d\n", number);
    printf("value %d\n", value);

    printf("sizeof(int*) = %d\n", sizeof(int*));

    printf("%llx\n", *p);

    return 0;
}