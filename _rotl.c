#include "monty.h"

/**
 * _rotl - The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *H = *stack;
	int lx = 0;

	(void)line_number;
	if (H == NULL)
	{
		_EXITFAILURE();
	}


	lx = H->n;
	while (H->prev != NULL)
	{
		H->n = H->prev->n;
		H = H->prev;
	}
	H->n = lx;
}
