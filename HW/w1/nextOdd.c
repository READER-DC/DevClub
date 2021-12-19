#include <stdio.h>

int main() {
    int x, notEven;
    
    scanf("%d", &x);
    notEven = x + 1;
    if ( x % 2 != 0 ) {
        printf("%d\n", x);
    } else {
        printf("%d\n", notEven);
    }
    
    return 0;
}
