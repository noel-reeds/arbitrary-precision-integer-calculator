## ARBI. INT CALC.
This program aims to perform basic maths operations without limits written in C without any library support. 

#### NOTE:
- This is work in progress :(
- The maximum supported value so far for any math operation is ULONG_MAX as defined in `stdint.h` and `limits.h` header.

#### Requirements:
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
  |  (+)         | addition     |
  |  (-)         | subtraction  |
  |  (\*)        | multiplication |
  |  (%)         | modulo       |
  |  (/)         | division     |
  |  (!)         | factorial    |
  |  (e**x)      | exponential  |

#### How To Carry Out Arithmetic Operations:
Arithmetic Operations can be done as so:

- Add two or more integers: `./calc add <num1> <num2>, <num3> ...`
- Subtract two integers: `./calc sub <num1> <num2>`
- Multiply two or more integers: `./calc mul <num1> <num2> <num3>..`
- Modulo of integers: `./calc mod <num1> <num2>`
- Division as so: `./calc div <num1> <num2>`
- Factorial as so: `./calc fact <num>!`



#### Resources:
- GNU [man pages](https://www.gnu.org/)
- GNU [Make](https://www.gnu.org/software/make/)
- [REPL](https://codeberg.org/andybalaam/igcc) for C/C++ programmers
