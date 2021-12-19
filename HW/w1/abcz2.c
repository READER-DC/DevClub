/*
Считать с клавиатуры целое число.
- Если число четное, вывести alpha
- Если число кратно трем, вывести bravo
- Если число кратно пяти, вывести charlie
- Если число не кратно ни одному из них, вывести zulu
*/
#include <stdio.h>

int main() {
    int number;
    int counter = 0;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        printf("alpha\n");
        counter = 1;
    }
    if ( number % 3 == 0 ) {
        printf("bravo\n");
        counter = 1;
    }
    if ( number % 5 == 0 ) {
        printf("charlie\n");
        counter = 1;
    }
    if ( counter == 0 ) {
        printf("zulu\n");
    }

    return 0;
}
