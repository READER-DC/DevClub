#include <stdio.h>

int main() {
    //float; double;

    printf("sizeof(float):%d\n", sizeof(float));
    printf("sizeof(double):%d\n", sizeof(double));

    float a = 0.1;
    float b = 0.2;

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

    // [0][.][0][0][0][0][1][0][0][0][0][0]
    // [1][0][.][0][0][0][1][0][0][0][0][0]
    // [1][0][0][0][0][0][.][0][0][0][0][0]

    return 0;
}