#include "arbitrary.h"

/**
 * add - adds two or more integers
 * 
 * Return: returns the sum of two integers..
 */
uint64_t arbitrary_add(uint64_t argc, uint64_t *arr[]) {
	uint64_t m, sum;
	
	if (argc == 4) {
		sum = *arr[2] + *arr[3];
		return sum;
	}
	else if (argc > 4) {
		sum = 0;
		for (m = 2; m < argc; m++) {
			sum = sum + *arr[m];
		}
		return sum;
	}
	return (0);
}
