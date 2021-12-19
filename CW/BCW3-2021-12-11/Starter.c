#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

double sum(double a, double b) {
	return a + b;
}

int main() {
	printf("%s\n", "Hello wrold");
	printf("%d\n", sum(5,12));
	printf("%d\n", sum(5.12, 12.242));

	return 0;
}