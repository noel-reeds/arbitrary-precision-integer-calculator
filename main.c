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
			int m;
			for (m = 0; m < argc; m++) {
				printf("%s\n", argv[m]);
				if (argv[m] == "add") {
					printf("yes\n");
				}
				else {
					printf("No\n");
				}
			}
			break;
		}
	}	
	return (0);
}
