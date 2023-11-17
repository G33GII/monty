#include "monty.h"

/**
 * _pall - Function that prints all data in the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
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
