#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    /* gcc -std=c99 square.2 */
    for ( int row = 1, counter = 1; row <= size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            printf("%d ", counter);
            counter = counter + 1;
        }
        printf("%d\n", counter);
        counter = counter + 1;
    }
    
    return 0;
}
