/*
int strLen(char str[])

Подсчитать длину заданной строки.
*/


#include <stdio.h>


void stringFil(char array[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%c\n", &array[i]);
    }
}

// void arrayPrintReversed(char array[], int size) {
//     for ( int i = size - 1; i > 0; i-- ) {
//         printf("%d ", array[i]);
//     }
//     printf("%d\n", array[0]);
// }

int strLen(char str[]) {
    int index = 0;
    
    for ( ; str[index] != 0; index++ );
    return index;
}




int main() {
    int size = 5;
    char str[size];
    
    stringFil( str, size);
    // arrayAbs( a, size);
    // arrayPrintReversed(a, size);

    printf("lenght = %d\n", strLen(str));

    return 0;
}