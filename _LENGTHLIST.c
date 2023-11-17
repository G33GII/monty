#include "monty.h"

/**
 * _LENGTHLIST - Function that prints all data in the stack
 * Return: void
 */
int _LENGTHLIST(void)
{
	stack_t *top_node = Em.STACK;
	int x = 0;

	while (top_node != NULL)
	{
		top_node = top_node->prev; /* Initially Prev */
		x++;
	}
	return (x);
}
