/*
В файле task.in даны два целых положительных числа.
Записать в файл task.out наименьшее общее кратное этих чисел.
Пример ввода

3 5

Пример вывода

15
не проходит ===FIX
С 1         ===FIX
3 и 2       ===FIX

*/

#include <stdio.h>

int gcd(int max, int min) {
    if ( min == 0 ) {
        return max;
    }
    return gcd(min, max%min);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b, max, min, lcm;
    
    fscanf(in, "%d %d", &a, &b);
    
    max = b;
    min = a;
    if ( a > b ) {
        max = a;
        min = b;
    }
    lcm = max / gcd(max, min) * min;
    
    fprintf(out, "%d\n", lcm);
    
    return 0;
}


/*
Программа слишком медленная!!!!
#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b, result, checker, max;
    
    fscanf(in, "%d %d", &a, &b);
    result = 1;
    max = a;

    if ( a < b) {
        max = b;
    }
    if ( a == 1 || b == 1 ) {
        result = max *2;
        max = 1;
    }

    
    for ( int i = 2; i <= max; i++ ) {
        checker = i;
        if ( a % i == 0 && b % i != 0 && a > 1 ) {
            result = result * i;
            a = a / i;
            i -= 1;
        }
        if ( b % i == 0 && a % i != 0 && i > checker - 1 ) {
            result = result * i;
            b = b / i;
            i -= 1;
        }
        if ( a % i == 0 && b % i == 0 && i > checker - 1 ) {
            b = b / i;
            a = a / i;
            result = result * i;
            i -= 1;
        }
    }
    fprintf(out, "%d\n", result);
    
    return 0;
}

*/


/*
a = 72;
    b = 99;
    int size = a+b;
    int resA[size];
    int resB[size];
    int res[size];
    result = 1;
    // fscanf(in, "%d %d", &a, &divisor);
    index = 0;

    for ( int i = 2; i <= a; i ++ ) {
        if ( a % i == 0) {
            index += 1; 
            resA[index] = i;
            a = a / i;
            i--;
            printf("%d ", resA[index]);
        }
    }
    printf("\n");
    index = 0;
    for ( int i = 2; i <= b; i ++ ) {
        if ( b % i == 0) {
            index += 1; 
            resB[index] = i;
            b = b / i;
            i--;
            printf("%d ", resB[index]);
        }
    }
    printf("\n");
    for ( int i = 0; i < size; i++){
        for ( int j = 0; j < size; j++){
            if (resB[i] == resA[j]){
                res = res*resA[j];
            }
        }
    }
    */