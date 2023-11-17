#include "monty.h"

/**
 * _strtoken - Tokenising the string from get-line
 * Return: void
 */
void _strtoken(void)
{
	Em.FUNC = strtok(Em.STR, " \n\t");
	Em.VALUE = strtok(NULL, " \n\t");
}

