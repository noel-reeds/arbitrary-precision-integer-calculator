#include "../arbitrary.h"
/**
 * arbitrary_mod - computes modulus of two integers.
 *
 *@num, num3: arguments of arithmetic operation.
 *
 * Return: returns modulo.
 */
uint64_t arbitrary_mod(uint64_t num1, uint64_t num2) {
	uint64_t mod;

	if (num2 > num1) {
		return (num1);
	}
	else {
		mod = num1 % num2;
		return mod;
	}
}
