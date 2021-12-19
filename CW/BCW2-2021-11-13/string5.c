#include <stdio.h>

#define MY_STRING_SIZE 8

int strLen(char* str) {
    int i = 0;

    for ( ; *str != 0; str++, i++ );

    return i;
}

int main() {
    char myString[MY_STRING_SIZE];

    int i = 0;

    for ( ; i < (MY_STRING_SIZE-1) && scanf("%c", &myString[i]) == 1; i++ );

    myString[i] = 0;

    printf("%s\n", myString);

    return 0;
}