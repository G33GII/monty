#include "monty.h"
/**
 * _sub - Function to subtract the top element of the stack from the second
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = top_node->prev;
	(*stack)->n = (*stack)->n - top_node->n;

}
