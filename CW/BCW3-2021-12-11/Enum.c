#include <stdio.h>
#include <limits.h>

typedef enum {
	DIF_PARAM = 0,
	MOD_PARAM,
	SUM_PARAM,
	MULTI_PARAM,
	DIV_PARAM,

} CalcParams;

void Calc(int number1, int number2, CalcParams param) {
	switch(param)
	{
		case SUM_PARAM: {
			printf("sum: %d", number1 + number2);

			break;
		}

		case DIF_PARAM: {
			printf("dif: %d", number1 - number2);

			break;
		}

		case MULTI_PARAM: {
			printf("mult: %d", number1 * number2);

			break;
		}

		case DIV_PARAM: {
			printf("div: %d", number1 / number2);

			break;
		}

		case MOD_PARAM: {
			printf("mod: %d", number1 % number2);

			break;
		}

		default : {
			printf("EPIC FAIL\n");

			break;
		}
	}
}

int main() {
	printf("sizeof(CalcParams): %d\n", sizeof(CalcParams));

	long long param = 0;
	int number1, number2;

	scanf("%d %d", &number1, &number2);
	scanf("%lli", &param);

	Calc(number1, number2, param);

	return 0;
}