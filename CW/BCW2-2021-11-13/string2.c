#include <stdio.h>

#define MY_STRING_SIZE 64

int strLen(char* str) {
    int i = 0;

    for ( ; str[i] != 0; i++ );

    return i;
}

int main() {
    char myString[MY_STRING_SIZE];

    scanf("%s", myString);

    printf("%s\n", myString);

    printf("myString length: %d\n", strLen(myString));

    return 0;
}