#include "monty.h"
#include <stdio.h>

/**
* _getline -
* @_fp:
* Return: void
*/
void _cpFile(FILE *_fp)
{
    char *gline = NULL;
    long int read = 0;
    size_t len = 0;

    while ((read = getline(&gline, &len, _fp)) != EOF)
    {
        printf("%s", gline);
    }

    free(gline);
}
