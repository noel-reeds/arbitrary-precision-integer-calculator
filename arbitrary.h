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

/*--- custom function defs ---*/
int main(int argc, char **argv);
char func_handler(char func_name);
uint64_t arbitrary_add(uint64_t num, uint64_t num3);
uint64_t arbitrary_sub(uint64_t num, uint64_t num3);
uint64_t arbitrary_mul(uint64_t num, uint64_t num3);

#endif
