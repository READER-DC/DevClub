/*
void arrayAbs(int array[], int size)
Заменить каждый элемент массива его абсолютным значением..
*/


#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size ; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}



void arrayZeroFill(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = -10;
    }
}

void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}




int main() {
    int size = 5;
    int a[size];
    
    arrayZeroFill( a, size);
    arrayAbs( a, size);
    arrayPrintReversed(a, size);

    return 0;
}



/*
unsigned int average(unsigned int a, unsigned int b) {
    if ( a % 2 == 1 && b % 2 == 1 ) {
        return a / 2 + b / 2 + 1;
    }
    return a / 2 + b / 2;
}
*/