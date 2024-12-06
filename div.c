#include "arbitrary.h"
/**
 * arbitrary_div - computes division of two integers.
 *
 *@num: first integer
 *
 *@num3: second integer
 *
 *Return: result of division.
 */
uint64_t arbitrary_div(uint64_t num1, uint64_t num2) {
	uint64_t res;

	if (num1 == 0 && num2 == 0) {
		printf("undefined\n");
		exit(EXIT_FAILURE);
	}
	else if (num2 == 0) {
		fprintf(stderr, "Zero Division Error!\n");
		exit(EXIT_FAILURE);
	}
	else if (num1 == 0) {
		res = 0;
		return (res);
	}
	else if (num2 > num1) {
		exit(1);
	}
	else {
		res = num1 / num2;
		return (res);
	}
	return (0);
}
