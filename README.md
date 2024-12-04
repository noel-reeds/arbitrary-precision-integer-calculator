## ARBI. INT CALC.
This program aims to perform basic maths operations without limits written in C without any library support. 

#### NOTE:
- This is work in progress :(
- The maximum supported value so far for any math operation is ULONG_MAX as defined in `stdint.h` and `limits.h` header.

#### REQUIREMENTS:
- The program runs on C's compiler gcc or cc, so make sure you have it installed.
- Also include [Make](https://www.gnu.org/software/make/) in your installations to easen compilations.

#### USAGE:
- To start using the program, clone the repository as such:
  `git clone https://github.com/noel-reeds/arbitrary-precision-integer-calculator`
- After successfully cloning, run `make` command to compile and obtain the binary.
- To carry out a math operation run as such:
  `./calc <math operation> <num1> <num2>`aaaaaand voila:)

#### Supported Arithmetic Operations:

- |math operator | description  |
  |    :---:     |    :---:     |
  | add (+)      | addition     |
  | sub (-)      | subtraction  |
  | mul (`*)     | multiplication |
