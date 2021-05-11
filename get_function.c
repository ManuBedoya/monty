#include "monty.h"
/**
 *
 *
 */
int (*get_function(char *opcode))()
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
		{NULL, NULL}
	};

	for (i = 0; op_function[i].opcode != NULL; i++)
	{
		if (op_function[i].opcode == opcode)
			return (op_function[i].f)
	}
	fprintf(stderr, "L<line_number>: unknown instruction <opcode>");
	exit(EXIT_FAILURE);
}
