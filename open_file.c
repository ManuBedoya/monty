#include "monty.h"
/**
 * open_file - Function that opnes the .m file and executes the commands
 * @monty_file: File to be opened and used
 * Return: void
 */
void open_file(char *monty_file)
{
	stack_t *stack = NULL;
	size_t sizeBuffer = 0;
	unsigned int line_number = 0;
	FILE *file = fopen(monty_file, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", monty_file);
		exit(EXIT_FAILURE);

	}
	while (getline(&vars.buffer, &sizeBuffer, file) != EOF)
	{
		if (vars.buffer[0] != '#')
		{
			vars.tokens = toke_line(vars.buffer);
			line_number++;
			if (vars.tokens[1] != NULL)
				vars.number = atoi(vars.tokens[1]);
			get_function(vars.tokens[0], line_number)(&stack,
								  line_number);
			free(vars.tokens);
		}
	}
	free_stack(stack);
	free(vars.buffer);
	fclose(file);
}
