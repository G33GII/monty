#include "monty.h"
/**
 * _pint - Function to print the top element of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top_node->n);
}
