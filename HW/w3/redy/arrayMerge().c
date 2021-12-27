/*
Условие задачи

Написать функцию
void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
В случае равенства предпочтение отдаётся элементам из первого массива.
Требуемая сложность: O(N)

*/

#include <stdio.h>
#define LIMIT 500

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; i < len1; k++, i++ ) {
        target[k] = src1[i];
    }
    for ( ; j < len2; k++, j++ ) {
        target[k] = src2[j];
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

    len1 = arrayScan(in, src1, 5);
    arrayPrint(out, src1, len1);

    len2 = arrayScan(in, src2, 11);
    arrayPrint(out, src2, len2);

    arrayMerge(target, src1, len1, src2, len2);
    arrayPrint (out, target, 16);


    fclose (out);
    fclose (in);


    return 0;
}


/*Программу нужно оптимизировать. Лишние инструкции: 15.
void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int sizeTarget = len1 + len2;
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; k < sizeTarget && i < len1; k++, i++ ) {
        target[k] = src1[i];
    }
    for ( ; k < sizeTarget && j < len2; k++, j++ ) {
        target[k] = src2[j];
    }
}
*/

/* Программа вернула 139 во время одного из тестов.
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
*/