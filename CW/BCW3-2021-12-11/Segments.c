#include <stdio.h>


//text, data, bss(zero)

int dataVar = 42; 				// data
int zeroVar; 					// bss
const int constVar = 12515;		// text

int *dataVarPtr = &dataVar;				// data
const int *constDataVarPtr = &dataVar;  // data

int * const dataVarPtrConst = &dataVar; // text
const int * const constDataVarPtrConst = &dataVar; // text

const int* myPtr = &constVar;

int main() {
	int a; // stack

	printf("Hello\n");
	printf("%d\n", constVar);
	*myPtr = 42;
	printf("%d\n", constVar);

	return 0;
}