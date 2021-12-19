#include <stdio.h>
#include <stdint.h>

// 192.168.1.1

typedef union {
	int raw;
	uint8_t	segment[4];
} IP;

int main() {
	IP myIp = {.segment = {192,168,1,1}};

	printf("%d\n", myIp.raw);

	printf("%d.", myIp.segment[0]);
	printf("%d.", myIp.segment[1]);
	printf("%d.", myIp.segment[2]);
	printf("%d\n", myIp.segment[3]);

	myIp.segment[3] = 10;

	printf("%d\n", myIp.raw);

	printf("%d.", myIp.segment[0]);
	printf("%d.", myIp.segment[1]);
	printf("%d.", myIp.segment[2]);
	printf("%d\n", myIp.segment[3]);

	return 0;
}