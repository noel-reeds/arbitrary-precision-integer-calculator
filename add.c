#include "arbitrary.h"

/**
 * add - adds two or more integers
 * 
 * Return: returns the sum of two integers..
 */
uint64_t arbitrary_add(uint64_t argc, uint64_t *arr[]) {
	int m;
	uint64_t sum;
	
	if (argc == 4) {
		sum = num + num3;
		return sum;
	}
	else if (argc > 4) {
		sum = 0;
		for (m = 2; m < argc; m++) {
			sum =+ argv[m];
		}
		return sum;
	}
	return (0);
}
