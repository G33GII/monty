#include "monty.h"
/**
 * _div - Function to divide the top element of the stack from the second
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = top_node->prev;
	if (top_node->n == 0)
	{
		fprintf(stderr, "L%d: can't div by 0\n", line_number);
		free(top_node);
		exit(EXIT_FAILURE);
	}

	(*stack)->n = (*stack)->n % top_node->n;
}