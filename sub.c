#include "arbitrary.h"
/*
 * arbitrary_sub - handles basic subtraction.
 *
 *@num: integer to subtracted from.
 *
 *@num3: integer to be subtracted
 *
 * Return: returns the result of subtraction
 */
uint64_t arbitrary_sub(uint64_t num1, uint64_t num2) {
	uint64_t res;

	printf("num1: %lu, num2: %lu\n", num1, num2);
	res = num1 - num2;
	return res;
}
