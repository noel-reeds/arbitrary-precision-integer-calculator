#ifndef ARBITRARY_H
#define ARBITRARY_H

#define FALSE 0
#define TRUE 1
#define ULL unsigned long long

/*--- header files ---*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>
int main(int argc, char *argv[]);
uint64_t arbitrary_mod(uint64_t num, uint64_t num3);
char func_handler(char func_name);
uint64_t arbitrary_div(uint64_t num1, uint64_t num2);
uint64_t arbitrary_add(int argc, uint64_t *arr[]);
uint64_t arbitrary_sub(uint64_t num1, uint64_t num2);
uint64_t arbitrary_mul(int argc, uint64_t *arr[]);

#endif
