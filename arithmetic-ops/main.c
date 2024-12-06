#include "../arbitrary.h"

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
	int n, i, m = 1;
	uint64_t num1, num2, res, *arr[argc - 2];

	if (argc < 4) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		return (0);
	}
	if (strcmp(argv[m], "add") == 0) {
		/* check arguments to add func have been
		* passed to the cmd */
		n = 0;
		for (m = 2; m < argc; m++) {
			arr[n] = malloc(sizeof(uint64_t));
			if (arr[n] == NULL)
				fprintf(stderr, "mem alloc failed");
			*arr[n] = strtoul(argv[m], NULL, 10);
			n++;
		}
		res = arbitrary_add(n, arr);
		printf("sum: %lu\n", res);
	}
	else if (strcmp(argv[m], "mul") == 0) {
		n = 0;
		for (m = 2; m < argc; m++) {
			arr[n] = malloc(sizeof(uint64_t));
			if (arr[n] == NULL)
				fprintf(stderr, "mem alloc failed.");
			*arr[n] = strtoul(argv[m], NULL, 10);
			n++;
		}
		res = arbitrary_mul(n, arr);
		printf("mul: %lu\n", res);
	}
	else {
		i = 2;
		num1 = strtoul(argv[i], NULL, 10);
		num2 = strtoul(argv[i + 1], NULL, 10);
		if (strcmp(argv[m], "sub") == 0) {
			res = arbitrary_sub(num1, num2);
			printf("sub: %lu\n", res);
		}
		else if (strcmp(argv[m], "div") == 0) {
			res = arbitrary_div(num1, num2);
			printf("div: %lu\n", res);
		}
		else if (strcmp(argv[m], "mod") == 0) {
			res = arbitrary_mod(num1, num2);
			printf("modulo: %lu\n", res);
		}
	}
	return (0);
}
