#include <stdio.h>
#include <time.h>

/* */
typedef enum {
	STARTUP,
	INIT,
	ACTION1,
	ACTION2,
	ACTION3,
	SHUTDOWN,

} EventCode;

typedef struct {
	EventCode eventCode;
	time_t t;

} Event;

void Event_Init(Event* obj, EventCode code) {
	obj->eventCode = code;
}

void PrintEvents(Event* eventList, int size, void (* printer)(Event*)) {
	for ( int i = 0; i < size; i++ ) {
		printer(eventList + i);
	}
}

/* */

void Event_Printf(Event* obj) {
	switch(obj->eventCode) {
		case STARTUP: {
			printf("STARTUP\n");
			break;
		}
		case INIT: {
			printf("INIT\n");
			break;
		}
		case ACTION1: {
			printf("ACTION1\n");
			break;
		}
		case ACTION2: {
			printf("ACTION2\n");
			break;
		}
		case ACTION3: {
			printf("ACTION3\n");
			break;
		}
		case SHUTDOWN: {
			printf("SHUTDOWN\n");
			break;
		}
		default: {
			printf("EPIC FAILT\n");
			break;
		}
	}
}

FILE* fileLog = NULL;

void Event_Fprintf(Event* obj) {
	if ( fileLog == NULL ) {
		fileLog = fopen("myLog.txt", "a");
	}

	switch(obj->eventCode) {
		case STARTUP: {
			fprintf(fileLog, "STARTUP\n");
			break;
		}
		case INIT: {
			fprintf(fileLog, "INIT\n");
			break;
		}
		case ACTION1: {
			fprintf(fileLog, "ACTION1\n");
			break;
		}
		case ACTION2: {
			fprintf(fileLog, "ACTION2\n");
			break;
		}
		case ACTION3: {
			fprintf(fileLog, "ACTION3\n");
			break;
		}
		case SHUTDOWN: {
			fprintf(fileLog, "SHUTDOWN\n");
			break;
		}
		default: {
			fprintf(fileLog, "EPIC FAILT\n");
			break;
		}
	}
}

int main(void) {
	Event eventList[6];

	Event_Init(&eventList[0], STARTUP);
	Event_Init(&eventList[1], INIT);
	Event_Init(&eventList[2], ACTION1);
	Event_Init(&eventList[3], ACTION2);
	Event_Init(&eventList[4], ACTION3);
	Event_Init(&eventList[5], SHUTDOWN);

	PrintEvents(eventList, 6, Event_Fprintf);
    
    return 0;
}