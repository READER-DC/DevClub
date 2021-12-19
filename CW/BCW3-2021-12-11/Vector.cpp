#include <stdio.h>
#include <math.h>
#include <iostream>

// public, private, protected

class Vector {
    double x = 0;
    double y = 0;

public:
    Vector() {
        this->x = 0;
        this->y = 0;

        std::cout << "constructor called for" << this << std::endl;
    }

    ~Vector() {
        std::cout << "destructor called for" << this << std::endl;
    }

    Vector(double x, double y = 0) {
        this->x = x;
        this->y = y;

        std::cout << "constructor called for" << this << std::endl;
    }

    Vector(const Vector& other) {
        this->x = other.x;
        this->y = other.y;

        std::cout << "copy constructor called for" << this << std::endl;
    }

    void vectorIncrement(Vector& other) {
        this->x += other.x;
        this->y += other.y;
    }

    void vectorDecrement(Vector& other) {
        this->x -= other.x;
        this->y -= other.y;
    }

    double vectorLen() {
        return hypot(this->x, this->y);
    }

    void operator=(const Vector& other) {
        std::cout << "operator= called for" << this << std::endl;

        this->x = other.x;
        this->y = other.y;
    }

    friend std::ostream& operator<<(std::ostream&, Vector&);
};

void operator+=(Vector& obj, Vector& other) {
    obj.vectorIncrement(other);
}

void operator-=(Vector& obj, Vector& other) {
    obj.vectorDecrement(other);
}

std::ostream& operator<<(std::ostream& output, Vector& obj) {
    return output << "(" << obj.x << ", " << obj.y << ")";
}

int main(void) {
    Vector v(12, 54);
    Vector y(9, 99);
    Vector z;
    Vector def(5);
    Vector vCopy = v; // Vector(const Vector& other) -> vCopy(v)

    vCopy = y;
    // vectorPrint(v); // c-style

    v += y; // operator+=(v, y)

    std::cout << v << std::endl;
    std::cout << z << std::endl;
    std::cout << def << std::endl;
    std::cout << vCopy << std::endl;

    return 0;
}
