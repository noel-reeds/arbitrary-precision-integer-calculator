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
	int n, m, num_arr;
	uint64_t num, res, num3, *arr[argc - 2];

	if (argc < 4) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		return (0);
	}
	m = 1;
	if (strcmp(argv[m], "add") == 0) {
		/* check arguments to add func have been
		* passed to the cmd */
		n = 0;
		for (m = 2; m < argc; m++) {
			arr[n] = malloc(sizeof(uint64_t));
			if (arr[n] == NULL) {
				fprintf(stderr, "mem alloc failed");
			}
			*arr[n] = strtoul(argv[m], NULL, 10);
			n++;
		}
		num_arr = n + 1;
		res = arbitrary_add(num_arr, arr);
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
