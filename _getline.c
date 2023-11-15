#include "monty.h"

/**
* _getline -
* @_fp:
* Return: void
*/
void _cpFile(FILE *_fp)
{
    /*char *gline = NULL;
    long int read = 0;
    size_t len = 0;

    while ((read = getline(&gline, &len, _fp)) != EOF)
    {
        _strtoken(gline);
        printf("%s", gline);
    }

    free(gline);*/
    int size = 100;
    char _s[100];
    char *_c = NULL;

    while (fgets(_s, size, _fp))
    {

        _c = _strtoken(_s);
        printf("%s\n", _c);
    }
}
