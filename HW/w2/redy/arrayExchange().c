/*
Написать функцию
void arrayExchange(int array[], int len)

Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
a[0] <-> a[1] a[2] <-> a[3] .....
Если последний элемент не имеет пары — не менять его значение.

Запрещено использование дополнительного массива.


Программу нужно оптимизировать. Лишние инструкции: 66.
*/


#include <stdio.h>
int arrayScan(FILE *in, int array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%d", &array[length]) == 1; length++ );
    return length;
}
void arrayExchange(int array[], int len) {
    for ( int i = 0, size = len - len % 2; i < size; i += 2 ) {
        int tmp = array[i];
        
        array[i] = array[i+1];
        array[i+1] = tmp;
    }
}




int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[20];
    int size = arrayScan(in, array, 20);
    printf("%d\n", size);
    arrayExchange(array, size);
    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    
    
    return 0;
}




/*
void arrayExchange(int array[], int len) {
    int tmp;
    for ( int i = 0; i < len - len % 2; i += 2 ) {
        tmp = array[i];
        array[i] = array[i+1];
        array[i+1] = tmp;
    }
}
*/
