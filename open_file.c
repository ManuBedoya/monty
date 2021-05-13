#include "monty.h"
void open_file(char *monty_file)
{
	char *buffer = NULL, **tokens = NULL;
	stack_t *stack = NULL;
	size_t sizeBuffer = 0;
	unsigned int line_number = 0;
	FILE *file = fopen(monty_file, "r");
	/*void (*chosen_function)(stack_t **stack, unsigned int line_number);*/

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", monty_file);
		exit(EXIT_FAILURE);

	}
	while (getline(&buffer, &sizeBuffer, file) != EOF)
	{
		tokens = toke_line(buffer);
		line_number++;
		get_function(tokens[0], line_number)(&stack, line_number);
	}
}
