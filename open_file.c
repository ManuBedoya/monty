#include "monty.h"
void open_file(char *monty_file)
{
	char *buffer = NULL, **tokens = NULL;
	size_t sizeBuffer = 0;
	FILE *file = fopen(monty_file, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", monty_file);
		exit(EXIT_FAILURE);

	}
	while (getline(&buffer, &sizeBuffer, file) != EOF)
	{
		tokens = toke_line(buffer);
		printf("%s\n", tokens[0]);
	}
}
