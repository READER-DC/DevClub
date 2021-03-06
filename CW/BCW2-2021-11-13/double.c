#include <stdio.h>

int a;
int b;
int div;

// 1.000003

// a = 1;
// b = 3;
// div = 100000;

int main() {

    double a = 0.1;
    double b = 0.2;

    if ( a + b == 0.3 ) {
        printf("EPIC WIN\n");
    } else {
        printf("EPIC FAIL\n");
    }

    printf("%.20f\n", 0.1);
    printf("%.20f\n", 0.2);
    printf("%.20f\n", 0.1 + 0.2);

    // 8      4     2     1     0.5   0.25   0.125  0.0625
    //[2^3]+[2^2]+[2^1]+[2^0].[2^-1]+[2^-2]+[2^-3]+[2^-4]

    a += 100;
    printf("%.20f\n", a);

    a += 1000;
    printf("%.20f\n", a);

    a += 1000;
    printf("%.20f\n", a);

    a += 5000;
    printf("%.20f\n", a);

    a += 25000;
    printf("%.20f\n", a);

    a += 250000;
    printf("%.20f\n", a);

    a += 2500000;
    printf("%.20f\n", a);

    a += 25000000;
    printf("%.20f\n", a);

    a += 250000000;
    printf("%.20f\n", a);

    a += 2500000000;
    printf("%.20f\n", a);

    a += 25000000000;
    printf("%.20f\n", a);

    a += 2500000000000;
    printf("%.20f\n", a);

    a += 2500000000000000000;
    printf("%.20f\n", a);

    // [0][.][0][0][0][0][1][0][0][0][0][0]
    // [1][0][.][0][0][0][1][0][0][0][0][0]
    // [1][0][0][0][0][0][.][0][0][0][0][0]

    return 0;
}