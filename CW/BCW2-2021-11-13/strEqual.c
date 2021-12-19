#include <stdio.h>

"Helloworld";
"Helloworld";

int strEqual(char *str1, char *str2) {
    for ( ; *str1 != 0 && *str1 == *str2; str1++, str2++ );
    
    if ( *str1 == *str2 ) {
        return 1;
    }
    return 0;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "world";

    strEqual(str1, str2);

    return 0;
}