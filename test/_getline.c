#include "monty.h"

/**
* _getline -
* @_fp:
* Return:
*/
void _getline(FILE *_fp)
{
    size_t len = 0;
    ssize_t read;
    char *gline = NULL;

     while ((read = getline(&gline, &len, _fp)) != -1)
    {
        printf("%s", gline);
    }

    free(gline);
}
