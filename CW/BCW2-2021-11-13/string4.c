#include <stdio.h>

#define MY_STRING_SIZE 8

void strUpperCase(char str[]) {
    for ( int i = 0; str[i] != '\0'; i++) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

// *(str + i)

int strLen(char* str) {
    int i = 0;

    for ( ; str[i] != 0; i++ );

    return i;
}

int main() {
    char myString[MY_STRING_SIZE];
    char format[4] = "%4s";
    // format[0] = '%';
    // format[1] = '4';
    // format[2] = 's';
    // format[3] = 0;

    scanf("%4s", myString);

    printf("%s\n", myString);

    printf("myString length: %d\n", strLen(myString));

    return 0;
}