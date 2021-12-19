#include<iostream>

class Car {

};

int main() {
    Car volvo, mazda, toyota;
    Car cars[] = {volvo, mazda, toyota};

    for ( int i = 0 ; i < 3; i++) {
        std::cout << &cars << std::endl;
    }
    return 0;
}