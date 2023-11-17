#include "monty.h"

/**
 * _ismonty_file - Checks if two file are present and is a ".m" file
 * @argc:Number of files passed from command line ARGs
 * @argv: Array of pointers each pointing to the files passed as command line
 * Return: void
 */
void _ismonty_file(char **argv, int argc)
{
	(void)argv;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/**
	 * char *shft = NULL;
	 * int _lx = 0;
	 * char *_m = NULL;
	 * char *_m = shft + _lx - 2;
	 * shft = argv[1];
	 * _lx = strlen(shft);
	 * _m = shft + _lx - 2;
	 *
	 * 			Aparrantly all file formats are allowed
	 *
	 * if (_lx < 2 || (strcmp(_m, ".m"))) {
	 * 		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	 * 		exit(EXIT_FAILURE);
	 * 	}
	*/
}
