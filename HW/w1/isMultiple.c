#include <stdio.h>

int main() {
    int number, multiplicity;
    
    scanf("%d %d", &number, &multiplicity);
    
    if ( number % multiplicity == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
