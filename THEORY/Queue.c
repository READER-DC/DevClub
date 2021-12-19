#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct QueueElement_s {
	struct QueueElement_s* next;
	int value;
} QueueElement;

typedef struct {
	QueueElement* start;
	QueueElement* end;
} Queue;

void Queue_Init(Queue* obj) {
	obj->start = NULL;
	obj->end = NULL;
}

bool Queue_Put(Queue* obj, int value) {
	QueueElement* el = malloc(sizeof(QueueElement));

	if ( el == NULL ) {
		return false;
	}
	
	if (obj->start) {
		obj->end->next = el;

	} else {
		obj->start = el;
	}

	el->next = NULL;
	el->value = value;
	obj->end = el;

	return true;
}

bool Queue_Get(Queue* obj, int* result) {
	QueueElement* el = obj->start;

	if ( el == NULL ) {
		return false;
	}

	obj->start = el->next;
	*result = el->value;

	free(el);

	return true;
}

int main() {
	int data = -1;
	Queue queue;

	Queue_Init(&queue);

	Queue_Put(&queue, 42);
	Queue_Put(&queue, 54);
	Queue_Put(&queue, 56);
	Queue_Put(&queue, 156);

	if ( Queue_Get(&queue, &data) )
		printf("%d\n", data);

	if ( Queue_Get(&queue, &data) )
		printf("%d\n", data);
	
	if ( Queue_Get(&queue, &data) )
		printf("%d\n", data);
	
	if ( Queue_Get(&queue, &data) )
		printf("%d\n", data);

}