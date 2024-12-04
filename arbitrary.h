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
UL int arbitrary_add(unsigned long int num, unsigned long int num3);
int arbitrary_sub(int num, int num3);

#endif
