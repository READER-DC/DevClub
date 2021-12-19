/*
Написать функцию
void arrayCopy(int destination[], int source[], int size).
*/

#include <stdio.h>
void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int destination[size];
    int source[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &source[i]);
    }
    arrayCopy(destination, source, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    
    return 0;
}
