#include "monty.h"

/**
 * _EXITFAILURE - Function clears all mem allocations & perror
 * Return: void
 */
void _EXITFAILURE(void)
{
	if (Em.STR)
	{
		free(Em.STR);
	}

	if (Em.STACK)
	{
		free_STACK(Em.STACK);
	}

		_close_file(Em.FP, Em.AGV);
	exit(EXIT_FAILURE);
}
