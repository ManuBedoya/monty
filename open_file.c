#include "monty.h"
/**
 * open_file - Function that opnes the .m file and executes the commands
 * @monty_file: File to be opened and used
 * Return: void
 */
void open_file(char *monty_file)
{
	char *buffer = NULL, **tokens = NULL;
	stack_t *stack = NULL;
	size_t sizeBuffer = 0;
	unsigned int line_number = 0;
	FILE *file = fopen(monty_file, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", monty_file);
		exit(EXIT_FAILURE);

	}
	while (getline(&buffer, &sizeBuffer, file) != EOF)
	{
		tokens = toke_line(buffer);
		line_number++;
		if (tokens[1] != NULL)
			number = atoi(tokens[1]);
		get_function(tokens[0], line_number)(&stack, line_number);
	}
	fclose(file);
}
