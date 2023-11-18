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

	if (Em.STACKH)
	{
		free_STACK(Em.STACKH);
	}

		_close_file(Em.FP, Em.AGV);
	exit(EXIT_FAILURE);
}
