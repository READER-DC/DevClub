#include <iostream>
#include "Vector.h"

int main() {

    Vector x(2, 7);
    Vector y(2, 7);
    Vector z;

    z = x - y;

    std::cout   << "z " << "= x-y = " 
                << x
                << " - "
                << y
                << " = "
                << z 
                << std::endl;

    z = x + y;

    std::cout << "z = x + y = " << z << std::endl;

    z += x;

    std::cout << "z += x = " << z << std::endl;

    z -= y;

    std::cout << "z -= y = " << z << std::endl;

    if ( x == y ) {
        std::cout << x << " is equal to " << y << std::endl;
    }
    if ( x != z ) {
        std::cout << x << "is not equal to " << z << std::endl;
    }

    std::cout << "Distanse z: " << x.len() << std::endl;


    return 0;
}