#include "arbitrary.h"
/**
 * arbitrary_mod - computes modulus of two integers.
 *
 *@num, num3: arguments of arithmetic operation.
 *
 * Return: returns modulo.
 */
uint64_t arbitrary_mod(uint64_t num, uint64_t num3) {
	uint64_t mod;

	mod = num % num3;
	return mod;
}
