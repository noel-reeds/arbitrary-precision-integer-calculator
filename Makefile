# rules for arbitrary precision calculator
#
all: api-calc

cc := gcc
cc_flags := -Werror -pedantic -Wextra -std=gnu89

api-calc: main.c add.c
	$(cc) $(cc_flags) $^ -o $@
