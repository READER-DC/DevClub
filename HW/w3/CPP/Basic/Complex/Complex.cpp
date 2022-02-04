#include "Complex.h"

Complex:Complex(double real, double imaginary);
Complex::~Complex();

double Complex::getReal() const;
double Complex::getImaginary() const;

bool Complex::operator==(const Complex& other) const{
    return 0;
}
bool Complex::operator!=(const Complex& other) const{
    return 0;
}
void Complex::operator+=(const Complex& other){

}
void Complex::operator-=(const Complex& other){

}
Complex Complex::operator+(const Complex& other) const{
    return 0;
}
Complex Complex::operator-(const Complex& other) const{
    return 0;
}
Complex Complex::operator*(const Complex& other) const{
    return 0;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    return out;
}