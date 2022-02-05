#include "Complex.h"

int main(){

    Complex a(2.0 ,3.0);
    Complex b(1, 1);
    Complex c;
    b += a;
    std::cout<< b << std::endl;
    a -= b;
    std::cout<< a << std::endl;
    c = a- b;
    std::cout<< c << std::endl;

    
    
    return 0;
}