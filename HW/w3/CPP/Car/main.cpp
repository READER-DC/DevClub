// #include <iostream>
#include "Car.h"


int main()
{
    Car car;

    std::cout << car << std::endl;
    car.refill(10);
    car.drive(Point(5, 11));
    std::cout << car << std::endl;
    car.refill(10);
    std::cout << car << std::endl;
    
    car.refill(30);
    std::cout << car << std::endl;
    car.drive(Point(20, 20));
    car.drive(Point(10, 10));
    std::cout << car << std::endl;
    car.refill(50);



    std::cout << car << std::endl;
    return 0;
}