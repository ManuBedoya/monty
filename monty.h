#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *struct variables - variables to use any file
 *@tokens: tokens
 *@buffer: line
 *@number: value
 *
 *Description: Structure storage all variables
 */
typedef struct variables
{
	char **tokens;
	char *buffer;
	int number;
} variable_t;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*Global variable*/
extern variable_t vars;
variable_t vars;


/*Prototypes of the functions*/

char **toke_line(char *line);
void open_file(char *monty_file);
void (*get_function(char *op, unsigned int lineN))(stack_t **, unsigned int);
void push_function(stack_t **stack, unsigned int line_number);
void nop_function(stack_t **stack, unsigned int line_number);
void pall_function(stack_t **stack, unsigned int line_number);
void pint_function(stack_t **stack, unsigned int line_number);
void pop_function(stack_t **stack, unsigned int line_number);
void swap_function(stack_t **stack, unsigned int line_number);
void add_function(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
#endif
