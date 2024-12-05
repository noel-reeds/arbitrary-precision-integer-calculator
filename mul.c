#include "arbitrary.h"
/**
 * arbitrary_mul - performs basic multiplication.
 *
 *@num: first argument of arbitrary_mul.
 *
 *@num3: second cmd_argument.
 *
 * Return: result of multiplication.
 */
uint64_t arbitrary_mul(int argc, uint64_t *arr[]) {
	uint64_t res = 1;
	int m;

	for (m = 0; m < argc; m++) {
		res = res * *arr[m];
	}
	return res;
}
