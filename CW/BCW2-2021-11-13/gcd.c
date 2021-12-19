
// 1071 divident
// 462  divisor
// 147  remainder

// 462  divident
// 147  divisor
// 21   remainder

// 147  divident
// 21   divisor   <--- result
// 0    remainder


// 5066 divident    -> a
// 127  divisor     -> b    ----+
// 113  remainder   -> a%b  ----+--+
                                |  |
// 127  divident    -> a    <---+  |
// 113  divisor     -> b    <------+
// 14   remainder

// 113  divident
// 14   divisor
// 1    remainder

// 14   divident
// 1    divisor     <--- result
// 0    remainder

#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    printf("%d\n", gcd(5066, 127));
    return 0;
}


// int gcd(int a=1071, int b=462) {
//     if ( b=462 == 0 ) {
//         return a;
//     }
//     return gcd(a=462, b=147) {
//             if ( b=147 == 0 ) {
//                 return a;
//             }
//             return gcd(147, 21) {
//                 if ( b=21 == 0 ) {
//                     return a;
//                 }
//                 return gcd(21, 0) {     //<-+
//                     if ( b=0 == 0 ) {   //  |
//                         return 21;      //--+
//                     }
//                 }
//             }
// }