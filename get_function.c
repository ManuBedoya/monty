#include "monty.h"
/**
 * get_function - Function to find the correct function to be used.
 * @op: Command that the program received
 * @lineN: Number of line where the command in called
 * Return: void
 */
void (*get_function(char *op, unsigned int lineN))(stack_t **, unsigned int)
{
	int i;

	instruction_t op_function[] = {
		{"push", push_function},
		{"pall", pall_function},
		{"pint", pint_function},
		{"pop", pop_function},
		{"swap", swap_function},
		{"add", add_function},
		{"nop", nop_function},
		{"sub", sub_function},
		{"div", div_function},
		{"mul", mul_function},
		{"mod", mod_function},
		{"pchar", pchar_function},
		{NULL, NULL}
	};

	for (i = 0; op_function[i].opcode != NULL; i++)
	{
		if (strcmp(op_function[i].opcode, op) == 0)
			return (op_function[i].f);
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", lineN, op);
	exit(EXIT_FAILURE);
}
