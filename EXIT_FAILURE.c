#include "monty.h"

/**
 * _EXITFAILURE - Function clears all mem allocations & perror
 * Return: void
 */
void _EXITFAILURE(void)
{
	free(Em.STR);
	free_STACK(Em.STACK);
	_close_file(Em.FP, Em.AGV);
	exit(EXIT_FAILURE);
}
