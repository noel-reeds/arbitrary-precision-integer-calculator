# rules for arbitrary precision calculator
#
# include C-linter in rules

all: calc

cc := gcc
cc_flags := -g -Werror -pedantic -Wextra -std=gnu89

calc: main.c add.c sub.c mul.c
	$(cc) $(cc_flags) $^ -o $@
