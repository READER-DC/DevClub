#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model){
        this->fuelCapacity = 0; //Запас топлива
        this->fuelAmount = capacity;//количество топлива, которое затратит машинка.
        this->fuelConsumption = consumption;
        this->location = location;
        this->model = model;
}
Car::~Car()
{

}

double Car::getFuelAmount() const
{
    return this->fuelAmount;
}
double Car::getFuelCapacity() const
{
    return this->fuelCapacity;
}
double Car::getFuelConsumption() const
{
    return this->fuelConsumption;
}
const Point& Car::getLocation() const
{
    return this->location;
}
const std::string& Car::getModel() const
{
    return this->model;
}

void Car::drive(const Point& destination)
{
    double newFuelConsumption;
    newFuelConsumption = destination.distance(this->location) * this->fuelConsumption;
    if ( newFuelConsumption > this->fuelCapacity || this->fuelCapacity == 0)
    {
        throw OutOfFuel();
    }
    this->location = destination;
    this->fuelCapacity = this->fuelCapacity - newFuelConsumption;
}
void Car::drive(double x, double y)
{
    Point destination(x, y);
    this->drive(destination);
}
void Car::refill(double fuel){
    double newFuelAmount = this->fuelCapacity;
    if ( newFuelAmount + fuel > this->fuelAmount)
    {
        throw ToMuchFuel();
    }
    this->fuelCapacity = newFuelAmount + fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car)
{
    out << "    model : "<< car.getModel()
        << "    location : "<< car.getLocation()
        << "    fuelAmount : " << car.getFuelAmount();
    return out;
}

