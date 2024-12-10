#ifndef ARBITRARY_H
#define ARBITRARY_H

#define FALSE 0
#define TRUE 1
#define LDBL_EXP 2.7182818284590452353602874713527

#define ULL unsigned long long

/*--- header files ---*/
#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>
int main(int argc, char *argv[]);
uint64_t arbitrary_mod(uint64_t num1, uint64_t num2);
char func_handler(char func_name);
long double arbitrary_div(uint64_t num1, uint64_t num2);
uint64_t arbitrary_add(int argc, uint64_t *arr[]);
int64_t arbitrary_sub(uint64_t num1, uint64_t num2);
int64_t arbitrary_mul(int argc, uint64_t *arr[]);
long double arbitrary_exp(uint64_t _num);
void arbitrary_free(void *arr[]);
uint64_t arbitrary_fact(uint64_t _num);


#endif
