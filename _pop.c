#include "monty.h"

/**
 * _pop - Function that POP the HUD of the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (top_node == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		_EXITFAILURE();
	}
	*stack = (*stack)->prev;
	free(top_node);
}
