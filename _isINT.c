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
		_EXITFAILURE();
	}
	while (_s[x] != '\0')
	{
		if ((isdigit(_s[x])) || (x == 0 && _s[0] == '-'))
		{
			x++;
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", Em.LN);
			_EXITFAILURE();
		}
	}
	return (0);
}
