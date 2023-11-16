#include "monty.h"

/**
 * _cpFile - Function opens the file pointer and reads each line
 * @_fp: File poimter after it hass been opened
 * Return: void
 */
void _cpFile(FILE *_fp)
{
    char *gline = NULL;
    long int read = 0;
    size_t len = 0;

    while ((read = getline(&gline, &len, _fp)) != EOF)
    {
        if (_isblnk(gline))
            continue;

        Em.STR = gline; /* Em - Extern Monty variable */
        Em.LN++;
        _exe();
    }

    free(gline);
}

/**
 * _isblnk - Checks if a string contains only whitespace characters.
 * @str: The string to be checked.
 * Return: 1 if the string contains only whitespace characters, 0 otherwise.
 */
int _isblnk(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
        if (!isspace((unsigned char)str[i]))
            return (0); /* Found a non-whitespace character */

    return (1); /* All characters are whitespace */
}
