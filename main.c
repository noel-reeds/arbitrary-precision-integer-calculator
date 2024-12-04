#include "arbitrary.h"

/**
 * main - entry point of our api-calculator.
 *
 *@argc: number of cmd arguments.
 *
 *@argv: arguments vector.
 *
 * Return: an integer from the integer operation.
 */

int main(int argc, char **argv) {
	int m = 1;
	uint64_t num, res, num3, *arr[argc-2];

	if (argc <= 3) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		return (0);
	}
	if (strcmp(argv[m], "add") == 0) {
		/* check arguments to add func have been
		* passed to the cmd */
		for (m = 2; m < argc; m++) {
			res = 0;
			*arr[m] = strtoul(argv[m], NULL, 10);
		}
		res = arbitrary_add(argc, *arr[]);
		printf("sum: %lu\n", res);
	}
	num = strtoul(argv[m + 1], NULL, 10);
	num3 = strtoul(argv[m + 2], NULL, 10);

	if (strcmp(argv[m], "sub") == 0) {
		res = arbitrary_sub(num, num3);
		printf("sub: %lu\n", res);
	}
	else if (strcmp(argv[m], "mul") == 0) {
		res = arbitrary_mul(num, num3);
		printf("mul: %lu\n", res);
	}
	else if (strcmp(argv[m], "div") == 0) {
		res = arbitrary_div(num, num3);
		printf("div: %lu\n", res);
	}
	else if (strcmp(argv[m], "mod") == 0) {
		res = arbitrary_mod(num, num3);
		printf("modulo: %lu\n", res);
	}
	return (0);
}
