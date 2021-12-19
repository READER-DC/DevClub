#include <stdio.h>

#define MY_STRING_SIZE 64

int strLen(char* str) {
    int i = 0;

    for ( ; str[i] != 0; i++ );

    return i;
}

int main() {
    char myString[MY_STRING_SIZE];

    myString[0] = 'H';
    myString[1] = 'e';
    myString[2] = 0;
    myString[3] = 'l';
    myString[4] = 'l';
    myString[5] = 'o';
    myString[6] = 0;

    printf("%s %s\n", myString, &myString[3]);

    for (int i = 0; i < MY_STRING_SIZE-1; ++i)
    {
        printf("%d ", myString[i]);
    }

    printf("%d\n", myString[MY_STRING_SIZE-1]);

    printf("myString length: %d\n", strLen(myString));
    printf("myString length: %d\n", strLen(&myString[3]));

    return 0;
}