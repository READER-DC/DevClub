/*
Условие задачи

Написать функцию:
void arrayShift(int array[], int size, int shift)
Реализовать циклический сдвиг массива на shift элементов вправо. Максимизировать производительность при оптимальном использовании памяти.
Требуемая сложность: O(N)

!!!!Программу нужно оптимизировать. Лишние инструкции: 101.

*/

#include <stdio.h>
#define LIMIT 500

void arrayShift(int array[], int size, int shift) {
    int limit = size / 2;
    int target[limit];
    int shiftCorrect = shift % size;
    
    if ( shiftCorrect < 0 ) {
        shiftCorrect = size + shiftCorrect;
    }
    
    if ( shiftCorrect > size / 2 ) {
        for ( int i = 0; i < size - shiftCorrect; i++ ) {
            target[i] = array[i];
        }
        for ( int i = 0; i < shiftCorrect; i++ ) {
            int mooveRight = size - shiftCorrect + i;
            
            array[i] = array[mooveRight];
        }
        for ( int i = 0; i < size - shiftCorrect; i++ ) {
            int mooveRight = shiftCorrect + i;
            
            array[mooveRight] = target[i];
        }
    }
    
    if ( shiftCorrect <= size / 2 ) {
        for ( int i = 0; i < shiftCorrect; i++ ) {
            int mooveRight = size - shiftCorrect + i;
            
            target[i] = array[mooveRight];
        }
        for ( int i = 0; i < size - shiftCorrect; i++ ) {
            int mooveLeft = size - shiftCorrect - i - 1;
            int stepLeft = size - i - 1;
            
            array[stepLeft] = array[mooveLeft];
        }
        for ( int i = 0; i < shiftCorrect; i++ ) {
            array[i] = target[i];
        }
    }
}



void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d_", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int arrayScan(FILE *in, int array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%d", &array[length]) == 1; length++ );
    return length;
}



int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int src1[LIMIT];
    int src2[LIMIT];
    int target[LIMIT];
    int len1;
    int len2;

    len1 = arrayScan(in, src1, 3);
    arrayPrint(out, src1, len1);


    arrayShift(src1, len1, -5);
    arrayPrint (out, src1, 3);


    fclose (out);
    fclose (in);


    return 0;
}
/* Программа вернула 139 во время одного из тестов.
void arrayShift(int array[], int size, int shift) {
    int target[shift];
    int limit = size - 1;

    for ( int i = 0, j = 0, k = 0; i <= size; i++ ) {
        if ( i < shift ) {
            j = size - shift + i;
            k = j - shift;
            target[i] = array[j];
            array[j] = array[k];
        }
        if ( i >= shift && i <= size - shift ) {
            j = size - shift - i;
            k = j + shift;
            array[k] = array[j];
        }
        if ( i > size - shift ) {
            j = size - i;
            array[j] = target[j];
        }
    }
}
*/


/* Программа вернула 139 во время одного из тестов.
void arrayShift(int array[], int size, int shift) {
    int target[shift];
    int limit = size - 1;
    
    for ( int i = 0, j = 0; i < shift; i++ ) {
        j = limit - i;
        target[i] = array[j];
    }
    for ( int i = 0, j = 0, k = 0; i < size - shift; i++ ) {
        j = limit - i;
        k = limit - shift - i;
        array[j] = array[k];
    }
    for ( int i = 0, j = 0; i < shift; i++ ) {
        j = limit - i;
        array[i] = target[j];
    }
}
*/
/* - Работает!!!
void arrayShift(int array[], int size, int shift) {
    int target[shift];
    
    for ( int k = 0; k < shift; k++ ) {
        target[k] = array[size-k-1];
    }
    for ( int i = 0; i < size-shift; i++ ) {
        array[size-i-1] = array[size-shift-i-1];
    }
    for ( int i = 0; i < shift; i++ ) {
        array[i] = target[shift-i-1];
    }
}*/
