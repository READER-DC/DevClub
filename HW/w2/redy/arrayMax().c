/*
Написать функцию:
int arrayMax(int array[], int size)
Вернуть значение максимального элемента в массиве.
*/
// epic win

#include <stdio.h>
int arrayMax(int array[], int size) {
    int max = array[0];

    for ( int i = 1; i < size; i++ ) {
        if ( max < array[i] ) {
            max = array[i];
        }
    }
    printf("%d\n", max);
}


int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++ ) {
        scanf("%d", &a[i]);
    }

    arrayMax(a, size);
    
    return 0;
}


/*
int arrayMin(int array[], int size) {
    int min;

    min = array[0];
    for ( int i = 1; i < size; i++ ) {
        if ( min > array[i] ) {
            min = array[i];
        }
    }
    printf("%d\n", min);
}
*/


/* Лишние инструкции: 42.
int arrayMin(int array[], int size) {
    for ( int i = 0; i < size - 1; i++ ) {
        if ( array[i] < array[i+1] ) {
            array[i+1] = array[i];
        }
    }
    return array[size-1];
}
*/ 

/* 11 лишних инструкций

#include <stdio.h>
int arrayMin(int array[], int size) {
    int min;
    min = array[0];
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < min ) {
            min = array[i];
        }
    }
    printf("%d\n", min);
}
*/


/* 21 лишн инстр
int arrayMin(int array[], int size) {
    int min;
    min = array[0];
    for ( int i = 0; i < size; i++, array++ ) {
        if ( *array < min ) {
            min = *array;
        }
    }
    printf("%d\n", min);
}
*/
