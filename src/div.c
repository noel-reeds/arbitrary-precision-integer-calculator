#include "../arbitrary.h"
/**
 * arbitrary_div - computes division of two integers.
 *
 *@num: first integer
 *
 *@num3: second integer
 *
 *Return: result of division.
 */
long double arbitrary_div(uint64_t num1, uint64_t num2) {
	uint64_t res, mod_res;
	long double float_res;

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
	else {
		float_res = (long double)num1 / (long double)num2;
		return (float_res);
	}
	return (0);
}
