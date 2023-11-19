#include "monty.h"

/* Em   =   PUQU FP   AGV   STR   FUNC  VALUE STACKH STACKT LN*/
_MONTY Em = {0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0};

/**
 * main - Main function for interpreting ".m" FILEs
 * @argc: Command line ARGs
 * @argv: Command line ARGs
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	FILE *_fp; /* fp - file pointer */

	/* _FILEPRESENT(argv, argc); */
	_ismonty_file(argv, argc); /* check whether the file name is a valid file */
	_fp = _open_file(argv[1]); /* function to fopen FILE name */

	Em.FP = _fp;
	Em.AGV = argv[1];

	_cpFile(_fp);

	_close_file(_fp, argv[1]);
	free_STACK(Em.STACKH);
	return (0);
}
