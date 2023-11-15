#include "monty.h"

/**
* _open_file -
* @argv:
* Return: FILE pointer
*/
FILE *_open_file(char *argv)
{
    FILE *_fd;

    if ((_fd = fopen(argv, "r")) == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv);
        exit (EXIT_FAILURE);
    }
    return (_fd);
}
