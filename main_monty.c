#include "monty.h"
/**
 *
 *
 */
int main(int argc, char **argv)
{
	char *monty_file = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (argc == 2)
	{
		open_file(monty_file);
	}
}
