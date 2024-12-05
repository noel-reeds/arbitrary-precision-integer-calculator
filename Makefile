# rules for arbitrary precision calculator

all: calc

cc := gcc
cc_flags := -g -Werror -pedantic -Wextra -std=gnu99

calc: div.c main.c mul.c sub.c add.c mod.c
	$(cc) $(cc_flags) $^ -o $@

# include C-linter in rules

linter := betty

run-linter:
	$(linter) $(src)
