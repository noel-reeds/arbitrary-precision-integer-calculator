#include "arbitrary.h"

/**
 * main - entry point of our api-calculator.
 *
 *@argc: number of cmd arguments.
 *
 *@argv: arguments vector.
 *
 * Return: an integer from the arithmetic operation.
 */

int main(int argc, char **argv) {
	int m;
	uint64_t num, res, num3, *arr[argc];

	if (argc < 4) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		return (0);
	}
	if (strcmp(argv[m], "add") == 0) {
		/* check arguments to add func have been
		* passed to the cmd */
		for (m = 2; m < argc; m++) {
			arr[m] = malloc(sizeof(uint64_t));
			if (arr[m] == NULL) {
				fprintf(stderr, "mem alloc failed");
			}
			*arr[m] = strtoul(argv[m], NULL, 10);
		}
		res = arbitrary_add(argc, arr);
		printf("sum: %lu\n", res);
	}
	m = 2;
	num = strtoul(argv[m], NULL, 10);
	num3 = strtoul(argv[m + 1], NULL, 10);

	if (strcmp(argv[m - 1], "sub") == 0) {
		res = arbitrary_sub(num, num3);
		printf("sub: %lu\n", res);
	}
	else if (strcmp(argv[m - 1], "mul") == 0) {
		res = arbitrary_mul(num, num3);
		printf("mul: %lu\n", res);
	}
	else if (strcmp(argv[m - 1], "div") == 0) {
		res = arbitrary_div(num, num3);
		printf("div: %lu\n", res);
	}
	else if (strcmp(argv[m - 1], "mod") == 0) {
		res = arbitrary_mod(num, num3);
		printf("modulo: %lu\n", res);
	}
	return (0);
}
