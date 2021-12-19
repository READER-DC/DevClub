/*
void strLowerCase(char str[])
*/


#include <stdio.h>
void strLowerCase(char str[]) {
    for ( ; *str != 0; str++ ) {
        if ( *str >= 'A' && *str <= 'Z' ) {
            *str = *str - 'A' + 'a';
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
    strLowerCase(str1);

    for ( int i = 0; str1[i] != 0; i++ ){
        fprintf(out, "%c", str1[i]);
    }
    
    return 0;
}
