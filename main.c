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
	while (TRUE) {
		/* if program name is supplied. */
		if (argc <= 1) {
			printf("no arguments passed\n");
			break;
		}
		else {
			/* iterate through argument count 
			 * and call resp. math functions.
			 */
			int m, res;
			for (m = 1; m < argc; m++) {
				if (strcmp(argv[m], "add") == 0) {
					printf("yup! func-name is %s.\n", argv[m]);
					/* check arguments to add func have been
					 * passed to the cmd
					 */
					if (argv[m+1] != NULL && argv[m+2] != NULL) {
						res = arbitrary_add((long)argv[m+1], (long)argv[m+2]);
						return (res);
					}
					else {
						printf("usage: add num1 num2.\n");
					}
				}
				else {
					return(0);
				}
			}
			break;
		}
	}	
	return (0);
}
