#include "../arbitrary.h"
/*
 * arbitrary_sub - handles basic subtraction.
 *
 *@num: integer to subtracted from.
 *
 *@num3: integer to be subtracted
 *
 * Return: returns the result of subtraction
 */
int64_t arbitrary_sub(uint64_t num1, uint64_t num2) {
	uint64_t res;
	int64_t _res;
	
	if (num2 > num1) {
		_res = (int64_t)num1 - (int64_t)num2;
		return _res;
	}
	res = num1 - num2;
	return res;
}
