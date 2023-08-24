# 0x19. C - Stacks, Queues - LIFO, FIFO

## Project Description

The Monty Bytecode Interpreter is a group project designed to create an interpreter for Monty ByteCodes files. Monty 0.98 is a scripting language compiled into Monty byte codes, similar to Python. The interpreter relies on a unique stack and specific instructions to manipulate it.

## Team Members
- Keamogetswe

## Learning Objectives
- Understanding of LIFO and FIFO
- Knowledge of stack data structure and when to use it
- Knowledge of queue data structure and when to use it
- Familiarity with common implementations of stacks and queues
- Understanding of common use cases for stacks and queues
- Proper usage of global variables


## Requirements
- Allowed Editors: vi, vim, emacs
- Code compilation on Ubuntu 20.04 LTS using gcc with specific flags (-Wall -Werror -Wextra -pedantic -std=c89)
- All code files must end with a new line
- Mandatory README.md file at the root of the project folder
- Code must adhere to the Betty style, checked using betty-style.pl and betty-doc.pl
- Maximum of one global variable allowed
- No more than 5 functions per file
- Use of the C standard library is allowed
- Prototypes of all functions should be included in the header file named `monty.h`
- Header files should be include-guarded
- Complete tasks in the order specified in the project


## Compilation & Output

- Code will be compiled as follows:

$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty


- Any output must be printed on stdout.
- Any error messages must be printed on stderr.

## Monty Bytecode Files
Monty byte code files typically have the `.m` extension. Some important points to note:

1. Only one instruction per line.
2. Any number of spaces before or after the opcode and its argument is allowed.
3. Blank lines (empty or spaces-only) in the file are ignored.
4. Additional text after the opcode or its required argument is not considered.

# The Monty Program

- Usage: monty file
  - where file is the path to the file containing Monty byte code

- If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE

- If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
  - where <file> is the name of the file

- If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
  - where is the line number where the instruction appears.
  - Line numbers always start at 1

- The monty program runs the bytecodes line by line and stop if either:
  - it executed properly every line of the file
  - it finds an error in the file
  - an error occurred

- If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with the status EXIT_FAILURE.
  - You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)
