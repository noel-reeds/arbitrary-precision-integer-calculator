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
	uint64_t m, res, first_num, second_num;

	while (TRUE) {
		/* if program name is supplied. */
		if (argc <= 3) {
			printf("Usage: add num1 num2.\n");
			break;
		}
		m = 1;
		if (strcmp(argv[m], "add") == 0) {
			/* check arguments to add func have been
			* passed to the cmd */
			if (argv[m+1] != NULL && argv[m+2] != NULL) {
				first_num = strtoul(argv[m+1], NULL, 10);
				second_num = strtoul(argv[m+2], NULL, 10);

				res = arbitrary_add(first_num, second_num);
				printf("sum: %lu\n", res);
				break;
			}
			else {
				printf("usage: add num1 num2.\n");
			}
		}
		else if (strcmp(argv[m], "sub") == 0) {
			res = arbitrary_sub(atoi(argv[m+1]), atoi(argv[m+2]));
			printf("sub: %lu\n", res);
			break;
		}
		else if (strcmp(argv[m], "mul") == 0) {
			first_num = strtoul(argv[m+1], NULL, 10);
			second_num = strtoul(argv[m+2], NULL, 10);

			res = arbitrary_mul(first_num, second_num);
			printf("mul: %lu\n", res);
			break;
		}
	}	
	return (0);
}
