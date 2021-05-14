# 0x19. C - Stacks, Queues - LIFO, FIFO

## Description
This repository contains an interpreter for Monty ByteCodes files written in C language.

### Files description

- **monty.h**
Header file that contains all the prototypes of the functions, the libraries to be used, and the structures.
- **free_stack.c**
Function that frees a double linked list of type stack_t.
- **get_function**
Function that searches the specific function to be used with the commands.
- **main_monty.c**
The entry point of the C program.
- **opcode_advanced_functions.c**
This file contains 5 different advanced functions.
  - *sub_function:* subtracts the top element of the stack from the second top element of the stack.
  - *div_function:* divides the second top element of the stack by the top element of the stack.
  - *mul_function:* multiplies the second top element of the stack with the top element of the stack.
  - *mod_function:* computes the rest of the division of the second top element of the stack by the top element of the stack.
  - *pchar_function:* prints the char at the top of the stack, followed by a new line.
- **opcode_functions.c**
This file contains 4 different functions.
  - *push_function:* pushes an element to the stack.
  - *pall_function:*  prints all the values on the stack, starting from the top of the stack.
  - *pint_function:* prints the value at the top of the stack, followed by a new line.
  - *pop_function:* removes the top element of the stack.
- **opcode_more_functions.c**
This file contains 4 different functions.
  - *swap_function:* swaps the top two elements of the stack.
  - *add_function:* adds the top two elements of the stack.
  - *nop_function:* doesnt do anything.
- **open_file.c**
This function opens the *.m* file to be used and executes the monty program when it is possible.

## Features

- **Programming language:** C
- **Compile like this:** `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

### Usage

`monty file_name` -> To use the interpreter, use the files that already exist in the bytecodes directory or create some new Monty files.Files containing Monty byte codes usually have the *(.m)* extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument
See the example below.
```
user@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
user@ubuntu:~/monty$
```
### Output

Any output is printed on `stdout`
Any error message is printed on `stderr`

## Authors

| Name | GitHub username |
| ------ | ------ |
| Carolina Capote | [Carolinacapote](https://github.com/Carolinacapote) |
| Manuel Bedoya | [ManuBedoya](https://github.com/ManuBedoya) |
