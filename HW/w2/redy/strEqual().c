/*
int strEqual(char str1[], char str2[])

Выяснить, равны ли строки.
*/


#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    int i =0;
    for ( ;str1[i] == str2[i] && str1[i] != 0; i++ );
    if (str1[i] == str2[i]) {
        return 1;
    }
return 0;
// правильно решение !    
//     for ( ;*str1 == *str2 && *str1 != 0; str1++, str2++ );
//     if ( *str1 == *str2 ) {
//         return 1;
//     }
// return 0;
}


void stringFil(char array[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%c", &array[i]);
    }
}

//=================


int strLen(char str[]) {
    int index = 0;
    
    for ( ; str[index] != 0; index++ );
    return index;
}

//================

void arrayPrint(char array[], int size) {
    for ( ; *array != 0; array++ ) {
        printf("%c", *array);
    }
    printf("\n");
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


  
    // arrayPrint(string1, size);
    printf("%d\n", strEqual (string1, string2));

    return 0;
}


