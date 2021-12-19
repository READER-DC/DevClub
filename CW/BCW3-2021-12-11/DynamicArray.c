#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int *memory;
	int lastIndex;

} DynamicArray;

void DynamicArray_Init(DynamicArray* obj) {
	obj->lastIndex = 0;
	obj->memory = malloc(sizeof(int) * 1);

	if ( obj->memory == NULL ) {
		printf("EPIC FAIL\n");
	}
}

void DynamicArray_DeInit(DynamicArray* obj) {
	free(obj->memory);
}

void DynamicArray_Push(DynamicArray* obj, int value) {
	int *tmp;

	obj->memory[obj->lastIndex] = value;
	obj->lastIndex += 1;

	tmp = realloc(obj->memory, sizeof(int) * (obj->lastIndex + 1));

	if ( tmp == NULL ) {
		printf("EPIC FAIL\n");
	} else {
		obj->memory = tmp;
	}
}

int DynamicArray_Pop(DynamicArray* obj) {
	int result = obj->memory[obj->lastIndex-1];
	int *tmp;

	if ( obj->lastIndex > 0 ) {
		obj->lastIndex -= 1;
		tmp = realloc(obj->memory, sizeof(int) * (obj->lastIndex + 1));

		if ( tmp == NULL ) {
			printf("EPIC FAIL\n");
		} else {
			obj->memory = tmp;
		}
	} else {
		result = obj->memory[0];
	}
	
	return result;
}

void DynamicArray_Print(DynamicArray* obj) {
	printf("DynamicArray::memory: %p\n", obj->memory);
	printf("DynamicArray::lastIndex: %d\n", obj->lastIndex);
}

int main() {
	DynamicArray myArray;

	DynamicArray_Init(&myArray);

	printf("push\n");

	for ( int i = 0; i < 10; i++ ) {
		DynamicArray_Push(&myArray, i);
		DynamicArray_Print(&myArray);
	}

	printf("pop\n");

	for ( int i = 0; i < 10; i++ ) {
		printf("%d\n", DynamicArray_Pop(&myArray));
		DynamicArray_Print(&myArray);
	}

	for ( int i = 50; i < 60; i++ ) {
		DynamicArray_Push(&myArray, i);
		DynamicArray_Print(&myArray);
	}

	for ( int i = 0; i < 10; i++ ) {
		printf("%d\n", DynamicArray_Pop(&myArray));
		DynamicArray_Print(&myArray);
	}

	return 0;
}