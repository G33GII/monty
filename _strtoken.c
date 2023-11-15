#include "monty.h"

/**
* _getline -
* Return: void
*/
void _strtoken(void)
{
    Em.FUNC = strtok(Em.STR, " \n\t");
    Em.VALUE = strtok(NULL, " \n\t");
}
