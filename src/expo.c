#include "../arbitrary.h"
/**
 * arbitrary_expo - computes exponential of an integer.
 *
 *@_num: integer to compute.
 *
 *Return: returns a exponential of integer on success.
 */
long double arbitrary_exp(uint64_t _num) {
	long double _res = 1;

	if (_num == 0) {
		return (_res);
	}
	else if (_num > 0) {
		while (_num > 0) {
			_res = LDBL_EXP * _res;
			_num--;
		}
		return (_res);
	}
	exit(EXIT_SUCCESS);
}
