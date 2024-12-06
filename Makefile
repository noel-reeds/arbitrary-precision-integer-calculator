# rules for arbitrary precision calculator

all: calc

cc := gcc
src := $(wildcard ./arithmetic-ops/*.c)
cc_flags := -g -Werror -pedantic -Wextra -std=gnu99

calc: $(src)
	$(cc) $(cc_flags) $^ -o $@

# include C-linter in rules

linter := betty

run-linter:
	$(linter) $(src)
