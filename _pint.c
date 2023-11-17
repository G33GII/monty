#include "monty.h"

/**
 * _pint - Function that prints data at top of  the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (top_node == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		_EXITFAILURE();
	}
	printf("%d\n", top_node->n);
}
