#include "monty.h"
/**
 * main - Enter point of the Monty interpreter
 * @argc: Number of arguments given by the user
 * @argv: String arguments
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *monty_file = argv[1];

	if (argc == 2)
		open_file(monty_file);
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
