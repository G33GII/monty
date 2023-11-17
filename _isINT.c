#include "monty.h"

/**
 * _isINT - Check whether a character is a didgit or NOT
 * @_s: The char to be checked
 * Return: 1 if digit else 0
 */
int _isINT(char *_s)
{
	int x = 0;

	if (_s == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", Em.LN);
		free_STACK(Em.STACK);
		free(Em.STR);
		_close_file(Em.FP, Em.AGV);
		exit(EXIT_FAILURE);
	}
	while (_s[x])
	{
		if (!isdigit(_s[x]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", Em.LN);
			_EXITFAILURE();
		}
		x++;
	}
	return (0);
}
