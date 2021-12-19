#include <iostream>

int calc(int a = 0, int b = 0, char c = '+', int mul = 1) {
	int result;
	
	switch(c) {
		case '-': {
			result = a - b;
			break;
		}

		case '+': {
			result = a + b;
			break;
		}
	}

	return result * mul;
}

int main() {
	int a;
	int b;
	char c;

	std::cin >> a >> b >> c;
	std::cout << calc(a, b, c) << std::endl;

	std::cout << calc(a, b, c, 10) << std::endl;
	std::cout << calc(a, b) << std::endl;
	std::cout << calc(a) << std::endl;


	return 0;
}