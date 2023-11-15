#include "monty.h"

/**
* main -
* @argc:
* @argv:
* Return: 0 on success
*/
void _close_file(FILE *_fd, char *argv)
{
    if (fclose(_fd) == EOF)
    {
        fprintf(stderr, "Error: Can't close file %s\n", argv);
        exit (EXIT_FAILURE);
    }
}
