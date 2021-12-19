#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct StackElement_s {
	struct StackElement_s* next;
	int value;
} StackElement;

typedef struct {
	StackElement* top;
} Stack;

void Stack_Init(Stack* obj) {
	obj->top = NULL;
}

bool Stack_Push(Stack* obj, int value) {
	StackElement* el = malloc(sizeof(StackElement));

	if ( el == NULL ) {
		return false;
	}
	
	el->next = obj->top;
	el->value = value;

	obj->top = el;

	return true;
}

bool Stack_Pop(Stack* obj, int* result) {
	StackElement* el = obj->top;

	if ( el == NULL ) {
		return false;
	}

	obj->top = el->next;
	*result = el->value;

	free(el);

	return true;
}

int main() {
	int data = -1;
	Stack queue;

	Stack_Init(&queue);

	Stack_Push(&queue, 42);
	Stack_Push(&queue, 54);
	Stack_Push(&queue, 56);
	Stack_Push(&queue, 156);

	if ( Stack_Pop(&queue, &data) )
		printf("%d\n", data);

	if ( Stack_Pop(&queue, &data) )
		printf("%d\n", data);
	
	if ( Stack_Pop(&queue, &data) )
		printf("%d\n", data);
	
	if ( Stack_Pop(&queue, &data) )
		printf("%d\n", data);

}