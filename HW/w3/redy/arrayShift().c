/*
Условие задачи

Написать функцию:
void arrayShift(int array[], int size, int shift)
Реализовать циклический сдвиг массива на shift элементов вправо. Максимизировать производительность при оптимальном использовании памяти.
Требуемая сложность: O(N)

Программу нужно оптимизировать. Лишние инструкции: 3.

*/

#include <stdio.h>
#define LIMIT 500

void arrayShift(int array[], int size, int shift) {
    int limit = size / 2;
    int target[limit];
    
    shift = shift % size;
    
    if ( shift < 0 ) {
        shift = size + shift;
    }
    
    if ( shift < size / 2 ) {
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            target[j] = array[i];
        }
        for ( int i = size - 1, j = size - 1 - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = target[i];
        }
    } else {
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            target[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; j >= 0; i--, j-- ) {
            array[i] = target[j];
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

    len1 = arrayScan(in, src1, LIMIT);
    arrayPrint(out, src1, len1);


    arrayShift(src1, len1, 5);
    arrayPrint (out, src1, 15);


    fclose (out);
    fclose (in);


    return 0;
}

/*
#include <stdio.h>
#define LIMIT 500

void arrayShift(int array[], int size, int shift) {
    int limit = size / 2;
    int target[limit];
    int moovePoint;

    shift = shift%size;
    
    if ( shift < 0 ) {
        shift = size + shift;
    }
    moovePoint = size - shift;
    
    if ( shift > size / 2 ) {
        for ( int i = 0; i < moovePoint; i++ ) {
            target[i] = array[i];
        }
        for ( int i = 0, j = moovePoint; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = 0, j = shift; i < moovePoint; i++, j++ ) {
            array[j] = target[i];
        }
    } else {
        for ( int i = 0, j = moovePoint; i < shift; i++, j++ ) {
            target[i] = array[j];
        }
        for ( int i = size - 1, j = moovePoint - 1; j >= 0; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
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

    len1 = arrayScan(in, src1, 16);
    arrayPrint(out, src1, len1);


    arrayShift(src1, len1, 5);
    arrayPrint (out, src1, 16);


    fclose (out);
    fclose (in);


    return 0;
}
*/

/* !!!!Программу нужно оптимизировать. Лишние инструкции: 45
void arrayShift(int array[], int size, int shift) {
    int limit = size / 2;
    int target[limit];
    int shiftCorrect = shift % size;
    int moovePoint;
    int mooveRight;
    
    if ( shiftCorrect < 0 ) {
        shiftCorrect = size + shiftCorrect;
    }
    
    if ( shiftCorrect > size / 2 ) {
        moovePoint = size - shiftCorrect;
        
        for ( int i = 0; i < moovePoint; i++ ) {
            target[i] = array[i];
        }
        for ( int i = 0; i < shiftCorrect; i++ ) {
            mooveRight = moovePoint + i;
            array[i] = array[mooveRight];
        }
        for ( int i = 0; i < moovePoint; i++ ) {
            mooveRight = shiftCorrect + i;
            array[mooveRight] = target[i];
        }
    } else {
        int mooveLeft;
        int stepLeft;
        
        moovePoint = size - shiftCorrect;
        for ( int i = 0; i < shiftCorrect; i++ ) {
            mooveRight = moovePoint + i;
            target[i] = array[mooveRight];
        }
        for ( int i = 0; i < moovePoint; i++ ) {
            mooveLeft = moovePoint - i - 1;
            stepLeft = size - i - 1;
            
            array[stepLeft] = array[mooveLeft];
        }
        for ( int i = 0; i < shiftCorrect; i++ ) {
            array[i] = target[i];
        }
    }
}
*/


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
