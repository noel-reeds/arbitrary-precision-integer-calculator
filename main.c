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
	int m, res;

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
				res = arbitrary_add(atoi(argv[m+1]), atoi(argv[m+2]));
				printf("sum: %d.\n", res);
				break;
			}
			else {
				printf("usage: add num1 num2.\n");
			}
		}
		else if (strcmp(argv[m], "sub") == 0) {
			res = arbitrary_sub(atoi(argv[m+1]), atoi(argv[m+2]));
			printf("sub: %d\n", res);
			break;
		}
	}	
	return (0);
}
