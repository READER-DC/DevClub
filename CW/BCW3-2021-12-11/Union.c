#include <stdio.h>

typedef struct {
	int x;
	double y;
	char c;
} S;

typedef union {
	int x;
	double y;
	char c;
} U;

int main() {
	U myUnion;

	myUnion.x = 65;

	printf("%d\n", myUnion.x);
	printf("%c\n", myUnion.c);
	printf("%f\n", myUnion.y);

	myUnion.y = 3.14;

	printf("%d\n", myUnion.x);
	printf("%c\n", myUnion.c);
	printf("%f\n", myUnion.y);

	printf("sizeof(S):%d\n", sizeof(S));
	printf("sizeof(U):%d\n", sizeof(U));

	return 0;
}