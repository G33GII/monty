#include "monty.h"

/**
 * _ismonty_file - Checks if two file are present and is a ".m" file
 * @argc:Number of files passed from command line ARGs
 * @argv: Array of pointers each pointing to the files passed as command line
 * Return: void
 */
void _ismonty_file(char **argv, int argc)
{
	char *shft = NULL;
	int _lx = 0;
	/* char *_m = shft + _lx - 2; */

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	shft = argv[1];
	_lx = strlen(shft);
	if (_lx < 2 && (strcmp(shft + _lx - 2, ".m")))
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
