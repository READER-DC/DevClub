/*
вывод строки на в теминал.
*/

#include <stdio.h>;
void stringFil(char array[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%c", &array[i]);
    }
}

//=================


void arrayPrint(char array[], int size) {
    for ( ; *array != 0; array++ ) {
        printf("%c", *array);
    }
    printf("%c\n", *array);
}
//=================


int main() {
    int size = 6;

    char string1[size];
    char string2[size];
    stringFil(string1, size);
    arrayPrint(string1, size);
    stringFil(string2, size);
    arrayPrint(string2, size);

    return 0;
}
