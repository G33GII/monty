#include "monty.h"

/**
* _close_file -
* @_fd:
* @argv:
* Return: void
*/
void _close_file(FILE *_fd, char *argv)
{
    if (fclose(_fd) == EOF)
    {
        fprintf(stderr, "Error: Can't close file %s\n", argv);
        exit (EXIT_FAILURE);
    }
}
