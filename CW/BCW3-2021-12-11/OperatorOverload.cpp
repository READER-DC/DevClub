#include <iostream>

// typedef struct {
// 	int x;

// } IntStruct // C style

struct IntStruct {
	int x;
};

int operator+(IntStruct a, IntStruct b) {
	std::cout << "int operator+ (IntStruct a, IntStruct b)" << std::endl;
	return a.x + b.x;
}

int operator+(IntStruct a, int x) {
	std::cout << "int operator+ (IntStruct a, int x)" << std::endl;
	return a.x + x;
}

int operator*(IntStruct a, int x) {
	std::cout << "int operator* (IntStruct a, int x)" << std::endl;
	return a.x * x;
}

std::ostream& operator<<(std::ostream& print, IntStruct a) {
	return print << "IntStruct x =" << a.x;
}

std::istream& operator>>(std::istream& scan, IntStruct& a) {
	return scan >> a.x;
}

int main() {
	IntStruct a = {42};
	IntStruct b = {12};

	int x;
	double y;

	// std::cin >> x >> y;
	// std::cout << x << std::endl << y << std::endl;

	std::cout << a + b << std::endl;
	std::cout << a + 42 << std::endl;
	std::cout << a * 42 << std::endl;
	std::cin >> a;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

}