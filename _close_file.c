#include "monty.h"

/**
 * _close_file - Function
 * @_fp: input
 * @argv: input
 * Return: void
 */
void _close_file(FILE *_fp, char *argv)
{
	if (fclose(_fp) == EOF)
	{
		fprintf(stderr, "Error: Can't close file %s\n", argv);
		exit(EXIT_FAILURE);
	}
}
