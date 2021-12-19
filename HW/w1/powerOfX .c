/*
Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.
Пример ввода

2 3

Пример вывода

1 2 4 8
*/

#include <stdio.h>

int main() {
    int base, degree, answer;
    
    answer = 1;
    scanf("%d %d", &base, &degree);
    
    for ( ; degree > 0; degree-- ) {
        printf("%d ", answer);
        answer = answer * base;
    }
    printf("%d\n", answer);
    
    return 0;
}



/*
#include <stdio.h>

int main() {
    int base, degree, answer;
    
    answer = 1;
    scanf("%d %d", &base, &degree);
    // if ( degree == 0 ) {
    //     printf("%d\n", answer);
    // } else {
        // printf("%d ", answer);
        for ( int i = 1; i < degree; i++ ) {
            if ( degree == 0 ){
                answer = 1;
                i=degree + 1;
            } else {
                answer = answer * base;    
            }
            
            printf("%d ", answer);
        }
        printf("%d\n", answer*base);
    
    return 0;
}
*/


// всё горадо проще. Сделай 2 принтФ


/*
#include <stdio.h>

int main() {
    int base, degree, answer;
    
    answer = 1;
    
    scanf("%d %d", &base, &degree);
    
    // if ( base == 0 ) {
    //     answer = 1;
    // }
    if ( degree == 0 ) {
        printf("%d\n ", answer);
    } else {
        printf("%d_", answer);
        for ( int i = 1; i < degree; i += 1 ) {
        // answer = answer * base;
        printf("%d_", answer * base);
    }
    printf("%d\n", answer*base);
    }
    
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int base, degree, answer;
    
    answer = 1;
    
    scanf("%d %d", &base, &degree);
    
    if ( base == 0 ) {
        answer = 0;
    }
    if ( degree != 0 ) {
        printf("%d ", answer);
    } else {
        printf("%d\n", answer);
    }
    
    for ( int i = 1; i < degree; i += 1 ) {
        answer = answer * base;
        printf("%d ", answer);
    }
    if ( degree != 0 ) {
        printf("%d\n", answer*base);
    }
    
    return 0;
}

*/