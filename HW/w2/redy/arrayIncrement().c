/*
void arrayIncrement(int array[], int size, int increment)
Увеличить каждый элемент массива на значение increment..
*/


#include <stdio.h>

void arrayIncrement(int array[], int size, int increment) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += increment;
    }
}





int main() {
    int array[], size;

    

    scanf("%u %u", &a, &b);
    printf("%u\n", average(a, b) );

    return 0;
}


