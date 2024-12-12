#include "../arbitrary.h"
/**
 * arbitrary_fact - computes factorial of an integer.
 *
 *@arr: ptr array of integer to compute.
 *
 *Return: returns a factorial of integer on success.
 */
uint64_t arbitrary_fact(uint64_t _num) {
	uint64_t res;

	if (_num == 0) {
		res = 1;
		return (res);
	}
	res = 1;
	while (_num >= 1) {
		res = res *  _num;
		_num--;
	}
	return (res);
}
