#include "monty.h"

/**
 * _swap - Function to swap the top two elements of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;
	stack_t *second_node; /*top_node->prev;*/

	if (stack == NULL || *stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		_EXITFAILURE();
	}
	second_node = top_node->prev;
	top_node->prev = second_node->prev;
	second_node->prev = top_node;
	*stack = second_node;
}
