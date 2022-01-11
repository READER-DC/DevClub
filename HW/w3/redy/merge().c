/*
void merge(int array[], int lo, int mid, int hi)
Слияние двух сортированных подмассивов в один отсортированный подмассив.
Первый подмассив от lo до mid не включая mid
Второй подмассив от mid до hi не включая hi

*/

#include <stdio.h>
#define LIMIT 500

void merge(int array[], int lo, int mid, int hi) {
    int length = hi - lo;
    int target[length];
    
    for ( int i = lo, k = lo, j = mid; k < hi; k++ ) {
        if ( i < mid && array[i] <= array[j] ) {
            target[k] = array[i];
            i += 1;
        } else {
            target[k] = array[j];
            j += 1;
        }
    }
    for ( int i = lo; i < hi; i++ ) {
        array[i] = target[i];
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


    merge(src1, 2, 5, 8);
    arrayPrint (out, src1, len1);


    fclose (out);
    fclose (in);


    return 0;
}
