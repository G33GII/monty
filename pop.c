#include "monty.h"
/**
 * _pop - Function to pop the top element of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = top_node->prev;

	free(top_node);

}
