#include <stdio.h>
#include <iostream>

template<typename Type, typename Type2>
Type sum(Type a, Type2 b) {
	return a + b;
}

int diff(const int& a, const int& b) {
	return a - b;
}

int main() {
	double a = 5.12;
	double b = 12.242;

	float f1 = 23;
	float f2 = 5252;
	
	printf("%s\n", "Hello wrold");
	printf("%d\n", sum(5,12));
	printf("%f\n", sum(a, b));
	printf("%f\n", sum(a, b));
	printf("%f\n", sum(f1, f2));

	double res = sum<int, int>(52.2, 42);
	printf("%f\n", res);

	res = sum(42, 52.2);
	printf("%f\n", res);

	int q = 42;

	diff(q, 11);

	std::cout << q << std::endl;

	int &qRef = q;
	qRef = 12123123;

	std::cout << q << std::endl;

	return 0;
}