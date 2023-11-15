#include "monty.h"

/**
* main -
* @argc:
* @argv:
* Return: 0 on success
*/
void _ismonty_file(char *argv, int argc)
{
    char *shft = argv;
    int _lx = strlen(argv);

    if ((_lx < 2 && !(strcmp(shft + _lx - 2, ".m"))) || argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit (EXIT_FAILURE);
    }

}
