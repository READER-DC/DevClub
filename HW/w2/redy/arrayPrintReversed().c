/*
Условие задачи

Написать функцию:
void arrayPrintReversed(int array[], int size)
Распечатать массив на экран в строку через пробел в обратном порядке.ну.
*/


#include <stdio.h>

void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

void arrayZeroFill(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}




int main() {
    int size = 5;
    int a[size];
    
    arrayZeroFill( a, size);
    arrayPrintReversed(a , size);

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