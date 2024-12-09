#include "../arbitrary.h"
#include <strings.h>
#include <stddef.h>

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
	size_t r, _strlen;
	int n, i = 2, m = 1;
	uint64_t num1, num2, res, _num, *arr[argc - 2];
	long double float_res;
	int64_t _res;
	char *_str, *fnum;
	
	if (argc == 3 && (strcmp(argv[m], "fact") == 0)) {
		_str = argv[m + 1];
		fnum = argv[m + 1];
		_strlen = strlen(_str);
		printf("_str: %s\n", _str);
		for (r = 0; r < _strlen; r++) {
			/* f_num contains an int string that excludes ! */
			fnum[r] = _str[r];
		}
		_num = strtoul(fnum, NULL, 10);
		res = arbitrary_fact(_num);
		return (res);
	}
	else if (argc < 4) {
		fprintf(stderr, "Usage: <arithmetic operation> num1 num2.\n");
		return (0);
	}
	else if (strcmp(argv[m], "add") == 0) {
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
		num1 = strtoul(argv[i], NULL, 10);
		num2 = strtoul(argv[i + 1], NULL, 10);
		if (strcmp(argv[m], "sub") == 0) {
			_res = arbitrary_sub(num1, num2);
			printf("sub: %ld\n", _res);
		}
		else if (strcmp(argv[m], "div") == 0) {
			float_res = arbitrary_div(num1, num2);
			printf("div: %Lf\n", float_res);
		}
		else if (strcmp(argv[m], "mod") == 0) {
			res = arbitrary_mod(num1, num2);
			printf("modulo: %lu\n", res);
		}
	}
	return (0);
}
