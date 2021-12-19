/*
Написать функцию:
void arrayZeroFill(int array[], int size)
Заполнить массив нулями.
*/


#include <stdio.h>

void arrayZeroFill(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}




int main() {
    int array[], size;

    

    scanf("%u %u", &a, &b);
    printf("%u\n", average(a, b) );

    return 0;
}


