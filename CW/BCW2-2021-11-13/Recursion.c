#include <stdio.h>

// 1 N
// 1*2*3...N = N!

// 7! = 6! * 7
// 6! = 5! * 6
// 5! = 4! * 5
//..
// 2! = 1! * 2
// 1! = 1

unsigned long long factorial(unsigned long long n) {
    if ( n == 1 ) { // Not for bender 
        return 1;
    }

    return factorial(n-1) * n; // 6! * 7;
}

// int fibonacci(int n) {
//     if ( n == 0 ) {
//         return 0;
//     }

//     if ( n == 1 ) {
//         return 1;
//     }

//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int factorial(int n=(4)) {
//     if ( n=(4) == 1 ) {
//         return 1;
//     }
//     return
//         int factorial(int n=(3)) {
//             if ( n=(3) == 1 ) {
//                 return 1;
//             }
//             return 
//                 int factorial(int n=(2)) {
//                     if ( n=(2) == 1 ) {
//                         return 1;
//                     }
//                     return 
//                         int factorial(int n=(1)) {
//                             if ( n=(1) == 1 ) {
//                                 return 1;
//                             }
//                         } 1 * n=(2); // 2
//                 } 2 * n=(3); // 6
//         } 6 * n(4); // 24
// }

int main() {
    unsigned long long result;
    int loops;

    //scanf("%d", &loops);

    //for ( int i = 0; i < 20000000; i++ ) {
        result = factorial(14);
    //}
    printf("%llu\n", result);

    return 0;
}

// int main() {            // <----+
//     printf("Hello\n");  //      |
//                         //      |
//     main();             // -----+
//     return 0;
// }

// int main() {            // <----+
//     printf("Hello\n");  //      |
//                         //      |
//     {
//         int main() {            // <----+
//             printf("Hello\n");  //      |
//                                 //      |
//             {
//                 int main() {            // <----+
//                     printf("Hello\n");  //      |
//                                         //      |
//                     int main() {            // <----+
//                         printf("Hello\n");  //      |
//                                             //      |
//                         main();             // -----+
//                         return 0;
//                     }
//                     return 0;
//                 }
//             }
//             return 0;
//         }
//     }
//     return 0;
// }