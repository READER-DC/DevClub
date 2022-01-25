/*
Условие задачи

В файле task.in задана последовательность символов.
Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
Большие буквы считать как маленькие.
Пример ввода

Hello!

Пример вывода

e 1
h 1
l 2
o 1
3/8 tests passed - добавил проверку на латниские буквы.
code works
UPD не допер можно брать алфавит и сравнивать с символами в файле если находим в файле пишем и считаем сколько их штук.
*/

#include <stdio.h>

#define LIMIT 5000

int arrayScan(FILE *in, char array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%c", &array[length]) == 1; length++ );
    return length;
}

void strLowerrCase(char str[]) {
    for ( ; *str != 0; str++ ) {
        if ( *str >= 'A' && *str <= 'Z' ) {
            *str = *str - 'A' + 'a';
        }
    }
}

int partition(char array[], int start, int end) {
    int mid = (start + end) / 2;
    int pivot;
    int idPivot = start;
    int idArray = start;
    
    pivot = array[mid];
    array[mid] = array[end];
    array[end] = pivot;
    for ( ; idArray < end; idArray++ ) {
        if ( array[idArray] < array[end] ) {
            pivot = array[idArray];
            array[idArray] = array[idPivot];
            array[idPivot] = pivot;
            idPivot += 1;
        }
    }
    pivot = array[idPivot];
    array[idPivot] = array[end];
    array[end] = pivot;
    return idPivot;
}

void quickSort(char array[], int start, int end) {
    int idPivot;
    
    if ( start >= end ) {
        return;
    }
    idPivot = partition(array, start, end);
    quickSort(array, start, idPivot-1);
    quickSort(array, idPivot+1, end);
}

void charCount(FILE *out, char array[], int len) {
    char targetChar[len];
    char check;
    int count = 0;
    int k = 0;
    
    strLowerrCase(array);
    quickSort(array, 0, len-1);
    
    for ( int i = 0; i < len; i++ ) {
        check = array[i];
        if ( check < 'a' || check > 'z' ) {
            count = 1;
        }
        for ( int j = 0; j <= i; j++ ) {
            if ( check == targetChar[j] ) {
                count += 1;
            }
        }
        if ( count == 0 ) {
            targetChar[k] = check;
            k += 1;
        }
        count = 0;
    }
    
    for ( int i = 0; i < k; i++ ) {
        count = 0;
        for ( int j = 0; j < len; j++ ) {
            if ( targetChar[i] == array[j] ) {
                count += 1;
            }
        }
        fprintf(out, "%c %d\n", targetChar[i], count);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char src[LIMIT];
    int len = LIMIT;
    
    len = arrayScan(in, src, len);
    charCount(out, src, len);
    
    fclose(out);
    fclose(in);
    
    return 0;
}
