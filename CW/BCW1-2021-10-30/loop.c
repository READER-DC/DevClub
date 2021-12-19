#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);

// LOOP: // <--------------------------+
//     if ( count > 0 ) {          //  |
//         printf("%d_", count);   //  |
//         count = count - 1;      //  |
//         goto LOOP;              // -+
//     }

    for ( ; count > 0; count-- ) {
        printf("%d ", count);
    }

    printf("0\n");

    return 0;
}
