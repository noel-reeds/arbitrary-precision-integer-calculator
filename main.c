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

uint64_t main(uint64_t argc, char **argv) {
	int m = 1;
	uint64_t num, *arr[argc-2];
	uint64_t res, first_num, second_num;

	if (argc <= 3) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		break;
	}
	if (strcmp(argv[m], "add") == 0) {
		/* check arguments to add func have been
		* passed to the cmd */
		for (m = 2; m < argc; m++) {
			res = 0;
			arr[m] = strtoul(argv[m], NULL, 10);
		}
		res = arbitrary_add(argc, *arr[]);
		printf("sum: %lu\n", res);
		break;
	}
	else if (strcmp(argv[m], "sub") == 0) {
		first_num = strtoul(argv[m + 1], NULL, 10);
		second_num = strtoul(argv[m + 2], NULL, 10);

		res = arbitrary_sub(first_num, second_num);
		printf("sub: %lu\n", res);
		break;
	}
	else if (strcmp(argv[m], "mul") == 0) {
		first_num = strtoul(argv[m + 1], NULL, 10);
		second_num = strtoul(argv[m + 2], NULL, 10);

		res = arbitrary_mul(first_num, second_num);
		printf("mul: %lu\n", res);
		break;
	}
	else if (strcmp(argv[m], "div") == 0) {
		first_num = strtoul(argv[m + 1], NULL, 10);
		second_num = strtoul(argv[m + 2], NULL, 10);

		res = arbitrary_div(first_num, second_num);
		printf("div: %lu\n", res);
		break;
	}
	else if (strcmp(argv[m], "mod") == 0) {
		first_num = strtoul(argv[m + 1], NULL, 10);
		second_num = strtoul(argv[m + 2], NULL, 10);

		res = arbitrary_mod(first_num, second_num);
		printf("modulo: %lu\n", res);
		break;
	}
	return (0);
