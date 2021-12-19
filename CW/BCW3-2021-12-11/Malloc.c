#include <stdio.h>
#include <stdlib.h>

///////////////
// HIGH ADDR
// ------------------ main stack frame
// 0 (return point)
// a
// b
// c
// d
// ------------------

	// ------------------ sum stack frame
	// SUM_RETURN
	// a
	// b
	// ------------------

	//  0 (return point) factorialRec stack frame
	// number
	// prev
	// ...
	//------------------
			//  0 (return point) factorialRec stack frame
			// number
			// prev
			// ...
			//
					//  0 (return point) factorialRec stack frame
					// number
					// prev
					// ...
					//	
							//  0 (return point) factorialRec stack frame
							// number
							// prev
							// ...
							//	

									//  0 (return point) factorialRec stack frame
									// number
									// prev
									// ...
									//	
	
	// ------------------ printf stack frame
	// SUM_RETURN
	// a
	// b
	// ------------------

// LOW
////////////////
//--------------------------------------------------------------------------------->>> Memory usage
// |
// |
// |
// |
// |
// |
// |
// |
// |
// |
// |
// |
// |
// |
// code flow


// unsigned long long factorialRec(unsigned long long number) {
// 	unsigned long long prev;

// 	if (number < 2) {
// 		return 1;
// 	}

// 	prev = factorialRec(number - 1);

// 	return number * prev;
// }

// int sum(int a, int b) {
// 	return a + b;
// }


// int main() {
// 	int a, b, c, d;

// 	sum(c, d);
// //SUM_RETURN:

// 	factorialRec(5);

// 	printf("%s\n", "HELLO");

// 	return 0;
// }

void breakPoint() {
	char dummy;
	scanf("%c", &dummy);
}

void memoryLeak() {
	int *ptr = malloc(5000000);

	ptr[0] = 42; // actions
}

int main() {
	printf("malloc\n");
	int size = 1 * 1000 * 1000 * 1000;
	int *myMemory = malloc(size);

	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();

	if ( myMemory == NULL ) {
		printf("EPIC FAIL\n");
		return 0;
	}

	for ( int i = 0; i < 10; i++ ) {
		myMemory[i] = i;
	}

	for ( int i = 0; i < 9; i++ ) {
		printf("%d ", myMemory[i]);
	}

	printf("%d\n", myMemory[9]);

	printf("end\n");

	scanf("%d", &size);
	free(myMemory);

	return 0;
}