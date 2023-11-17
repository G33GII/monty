#include "monty.h"
/**
 * _pstr - Function to print the top element of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	(void)line_number;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pstr, stack empty\n", line_number);
	}

	while (node != NULL && node->n != 0 && node->n >= 0 && node->n <= 127)
	{
		printf("%c", node->n);
		node = node->prev;
	}

	printf("\n");
}
