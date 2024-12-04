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
uint64_t arbitrary_div(uint64_t num, uint64_t num3) {
	uint64_t res;

	if (num == 0) {
		fprintf(stderr, "Zero Division Error!\n");
		return;
	}
	else if (num3 == 0) {
		res = 0;
		return (res);
	}
	else {
		res = num / num3;
		return (res);
	}
	return (0);
}
