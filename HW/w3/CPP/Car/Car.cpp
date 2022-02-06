#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model){
        this->fuelAmount = 0;
        this->fuelCapacity = capacity;
        this->fuelConsumption = consumption;
        this->location = location;
        this->model = model;
}
Car::~Car(){
    
}

double Car::getFuelAmount() const{
    return this->fuelAmount;
}
double Car::getFuelCapacity() const{
    return this->fuelCapacity;
}
double Car::getFuelConsumption() const{
    return this->fuelConsumption;
}
const Point& Car::getLocation() const{
    return this->location;
}
const std::string& Car::getModel() const{
    return this->model;
}

void Car::drive(const Point& destination){
    double newFuelConsumption;
    newFuelConsumption = destination.distance(getLocation()) * getFuelConsumption();
    if (newFuelConsumption <= getFuelAmount() ) {
        this->location = destination;
        this->fuelAmount = this->fuelAmount  - newFuelConsumption;
    }
}
void Car::drive(double x, double y){
    double newFuelConsumption;
    Point a(x, y);
    newFuelConsumption = a.distance(getLocation()) * getFuelConsumption();
    if (newFuelConsumption <= getFuelAmount() ) {
        this->location = a;
        this->fuelAmount = this->fuelAmount  - newFuelConsumption;
    }
}
void Car::refill(double fuel){
    if (this->fuelAmount + fuel > this->fuelCapacity) {
        this->fuelAmount = this->fuelCapacity;
    }
}

std::ostream& operator<<(std::ostream& out, const Car& car){
    out << "    model : "<< car.getModel()
        << "    location : "<< car.getLocation()
        << "    consumption : "<< car.getFuelConsumption()
        << "    fuelAmount : " << car.getFuelAmount();
    return out;
}

class OutOfFuel {};
class ToMuchFuel {};