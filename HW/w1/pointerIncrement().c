/*
void pointerIncrement(int *value)

Увеличить на единицу значение по переданному адресу value.
*/
#include <stdio.h>

void pointerIncrement(int *value) {
    *value +=1;
}

int main() {
    int size;
    
    scanf("%d", &size);

    for ( int row = 1; row <= size; row++ ) {
        pointerIncrement(&size);

    printf("%d\n", size);
    }
    
    return 0;
}

