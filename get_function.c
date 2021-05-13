#include "monty.h"
/**
 *
 *
 */
void (*get_function(char *opcode, unsigned int lineN))(stack_t **, unsigned int)
{
	int i;

	instruction_t op_function[] = {
		{"push", push_function},
		/*{"pall", pall_function},
		{"pint", pint_function},
		{"pop", pop_function},
		{"swap", swap_function},
		{"add", add_function},*/
		{"nop", nop_function},
		{NULL, NULL}
	};

	for (i = 0; op_function[i].opcode != NULL; i++)
	{
		if (strcmp(op_function[i].opcode, opcode) == 0)
			return (op_function[i].f);
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", lineN, opcode);
	exit(EXIT_FAILURE);
}
