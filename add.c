#include "arbitrary.h"

/**
 * add - adds two or more integers
 * 
 * Return: returns the sum of two integers..
 */
uint64_t arbitrary_add(int argc, uint64_t *arr[]) {
	int m;
	uint64_t sum;

	sum = 0;
	for (m = 0; m < argc; m++) {
		sum = sum + *arr[m];
	}
	return sum;
}
