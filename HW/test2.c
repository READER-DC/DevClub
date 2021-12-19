#include <iostream>

class Car {
    public:
        int maxSpeed;
        int currentSpeed;
};

int main() {
    Car car1, car2;

    car1.maxSpeed = 260;
    car2.maxSpeed = 180;

    car1.currentSpeed = 56;
    car2.currentSpeed = 82;


    std::cout << "maxSpeed:" << std::endl;
    std::cout << "  car1: " << car1.maxSpeed << std::endl;
    std::cout << "  car2: " << car2.maxSpeed << std::endl;
    std::cout << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << std::endl;

    car1.currentSpeed += 43;

    std::cout << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << std::endl;

    return 0;
}