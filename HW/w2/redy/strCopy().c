/*
void strCopy(char target[], char source[])

Гарантируется, что строка target не короче строки source.
*/


#include <stdio.h>
void strCopy(char target[], char source[]) {
    int index = 0;
    
    for ( ; source[index] != 0; index++ ) {
        target[index] = source[index];
    }
    target[index] = 0;
}


void arrayPrint(char array[], int size) {
    for ( ; *array != 0; array++ ) {
        printf("%c", *array);
    }
    printf("%c\n", *array);
}

int main() {
    int size = 12;
    char source[] = "Hello World!";
    char target[size];

    // arrayPrint(source, size);
    strCopy(target, source);
    arrayPrint(target, size); 


    return 0;
}


/*
void strCopy(char target[], char source[]){
    int index = 0;

    for ( ; source[index] != 0; index++ ){
        target[index] = source[index];
    }
    target[index] = source[index];
}
*/