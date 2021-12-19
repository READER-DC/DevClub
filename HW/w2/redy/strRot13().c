/*
Написать функцию:
void strRot13(char str[])
Зашифровать строку по алгоритму ROT13
Программу нужно оптимизировать. Лишние инструкции: 104.

*/


#include <stdio.h>
void strRot13(char str[]) {
    for ( ; *str != 0; str++ ) {
        if ( *str >= 'A' && *str <= 'Z' ) {
            if ( *str < 'A' + 13 ) {
                *str = *str + 13;
            } else {
                *str = 12 - ('Z' - *str) + 'A';
            }
        }
        if ( *str >= 'a' && *str <= 'z' ) {
            if ( *str < 'a' + 13 ) {
                *str = *str + 13;
            } else {
                *str = 12 - ('z' - *str) + 'a';
            }
        }
    }
}



int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size1;
    int limit = 100;
    char str1[limit];

    
    fscanf(in, "%100s", str1);

    // for ( size1 = 0; str1[size1] != 0; size1++ );
    strRot13(str1);

    for ( int i = 0; str1[i] != 0; i++ ){
        fprintf(out, "%c", str1[i]);
    }
    fprintf(out, "\n");
    
    return 0;
}


/*
void strRot13(char str[]) {
    for ( int i = 0; str[i] != 0; i++ ) {
        if ( str[i] >= 'A' && str[i] <= 'Z' ) {
            if ( str[i] < 'A' + 13 ) {
                str[i] = str[i] + 13;
            } else {
                str[i] = 12 - ('Z' - str[i]) + 'A';
            }
        }
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            if ( str[i] < 'a' + 13 ) {
                str[i] = str[i] + 13;
            } else {
                str[i] = 12 - ('z' - str[i]) + 'a';
            }
        }
    }
}
*/