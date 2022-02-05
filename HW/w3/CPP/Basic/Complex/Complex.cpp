#include "Complex.h"

Complex::Complex(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex(){
}

double Complex::getReal() const{
    return this->real;
}
double Complex::getImaginary() const{
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const{
    return this->real == other.getReal() && this->imaginary == other.getImaginary();
}
bool Complex::operator!=(const Complex& other) const{
    return this->real != other.getReal() || this->imaginary != other.getImaginary();;
}
void Complex::operator+=(const Complex& other){
    this->real += other.getReal();
    this->imaginary += other.getImaginary();

}
void Complex::operator-=(const Complex& other){
    this->real -= other.getReal();
    this->imaginary -= other.getImaginary();

}
Complex Complex::operator+(const Complex& other) const{
    Complex temp;
    temp.real = this->real + other.getReal();
    temp.imaginary = this->imaginary + other.getImaginary();
    return temp;
}
Complex Complex::operator-(const Complex& other) const{
    Complex temp;
    temp.real = this->real - other.getReal();
    temp.imaginary = this->imaginary - other.getImaginary();
    return temp;
}
Complex Complex::operator*(const Complex& other) const{
   Complex temp;
    temp.real = this->real * other.getReal() - this->imaginary * other.getImaginary();
    temp.imaginary = this->real * other.getImaginary() + this->imaginary * other.getReal() ;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    char z = '+';
    if ( complex.getImaginary() < 0 ) {
        out << complex.getReal() << complex.getImaginary()<<"i";
    } else {
        out << complex.getReal() << z << complex.getImaginary()<<"i";
    }
    
    return out;
}