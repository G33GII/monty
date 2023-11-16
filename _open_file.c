#include "monty.h"

/**
 * _open_file - Opens the FILE name for reading
 * @argv: Holds the file name to be opened
 * Return: FILE pointer
 */
FILE *_open_file(char *argv)
{
    FILE *_fp; /* fp - file pointer */

    if ((_fp = fopen(argv, "r")) == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv);
        exit(EXIT_FAILURE);
    }
    return (_fp);
}
