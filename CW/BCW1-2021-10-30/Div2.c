/* 
Считать min, max. Вывести в столбик чётные числа от min до max включительно.*/

/* -11 9 */

/*
-10...
0
2
4
6
8
*/

#include <stdio.h>

int main() {
    int min, max, remider;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min += 1;
    }
    
    for ( ; min <= max; min += 2 ) {
        printf("%d\n", min);
    }
    
    return 0;
}
