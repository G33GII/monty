#include "monty.h"

/**
* _getline -
* @_fp:
* Return: void
*/
char *_strtoken(char *_line)
{
    return (strtok(_line, " "));
}
