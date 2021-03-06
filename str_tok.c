#include "monty.h"
/**
 * toke_line - tokenizes the strings
 * @line: String to be tokenize
 * Return: Array of tokenized strings
 */
char **toke_line(char *line)
{
	char *token, **arguments_token;
	int i = 0, size = strlen(line);

	arguments_token = malloc(sizeof(char *) * size);
	if (!arguments_token)
	{
		free(arguments_token);
		fprintf(stderr, "malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, " '\n'");
	while (token != NULL)
	{
		arguments_token[i++] = token;
		token = strtok(NULL, " '\n'");
	}
	return (arguments_token);
}
