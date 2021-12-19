/*
Написать функцию:
int arraySum(int array[], int size)
Вернуть сумму элементов массива.
size > 0
*/


#include <stdio.h>
int arraySum(int array[], int size) {
    int arraySum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        arraySum += array[i];
    }
    return arraySum;
}


int main() {
    
    return 0;
}


