/*
Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.
Пример ввода

0 12 2 3

Пример вывода

0
6
12
10/16 tests passed
*/

#include <stdio.h>

int gcd(int max, int min) {
    if ( min == 0 ) {
        return max;
    }
    return gcd(min, max%min);
}

int main() {
    int min, max, m, n, lcm, max1, min1;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    max1 = m;
    min1 = n;
    
    if ( n > m ) {
        max1 = n;
        min1 = m;
    }
    lcm = max1 / gcd(max1, min1) * min1;
    
    if ( min % lcm > 0 ) {
        min += lcm;
    }
    min -= min % lcm;
    
    for ( int i = min; i <= max; i += lcm ) {
        printf("%d\n", i);
    }
    
    return 0;
}


/*решение обоих алгоритмов загоняю в масивы сравнивю каждый элемент с каждым не равных нет! 
#include <stdio.h> 

int gcd(int a, int b) {
    for ( int remaider = 1; remaider != 0; a = b, b = remaider ) {
        remaider = a % b;
    }
    return a;
}

int lcm(int a, int b) {
    return ((a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b));
}

int main() {
    int min, max, m, n;
    int j;
    int lcmVal;
    int answer[1000];
    int my[1000];
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    lcmVal = lcm(m, n);
    if ( min % lcmVal > 0 ) {
        min += lcmVal;
    }
    min -= min % lcmVal;
    j = 0;
    for ( int i = min; i <= max; i += lcmVal ) {
        answer[j] = i;
        j++;
    }

    if ( min < 0 && min % lcmVal != 0 ) {
        min = min - min % lcmVal;
    }
    if ( min > 0 && min < lcmVal ) {
        min = lcmVal;
    }
    if ( min > 0 && min > lcmVal ) {
        min = 2 * lcmVal;
    }
    j = 0;
    for ( int i = min; i <= max; i += lcmVal ) {
        // printf("%d ", i);
        my[j] = i;
        j++;
    }

    for ( int i = 0 ; i < j; i++ ){
        if (answer[i] != my[i]) {
            printf("answer %d != my %d", answer[i], my[i]);
        }
    }
    
    return 0;
}
*/


/* 10/16 tests passed = тест так и не подобрал
#include <stdio.h>

int gcd(int max, int min) {
    if ( min == 0 ) {
        return max;
    }
    return gcd(min, max%min);
}

int main() {
    int min, max, m, n, lcm, max1, min1;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    max1 = m;
    min1 = n;
    
    if ( n > m ) {
        max1 = n;
        min1 = m;
    }
    lcm = max1 / gcd(max1, min1) * min1;
    if ( min < 0 && min % lcm != 0 && -1 * lcm > min ) {
        min = min - min % lcm;
    }
    if ( min > 0 && min < lcm ) {
        min = lcm;
    }
    for ( int i = min; i <= max; i += lcm ) {
        printf("%d\n", i);
    }
    
    return 0;
}

*/


/* проверить в бендере! 

6/16 tests passed

#include <stdio.h>

int gcd(int max, int min) {
    if ( min == 0 ) {
        return max;
    }
    return gcd(min, max%min);
}

int main() {
    int min, max, m, n, step, lcm;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);

    int max1 = m;
    int min1 = n;
    if ( n > m ) {
        max1 = n;
        min1 = m;
    }
    lcm = max1 / gcd(max1, min1) * min1;
    
    for ( int i = min; i <= max; i += lcm ) {
        printf("%d\n", i);
    }
    
    return 0;
}
*/
