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
	stack_t *top_node = *stack;
	int _x = _LENGTHLIST();
	int _z = 0, lx = 0;

	lx = (*stack)->n;
	while (top_node->prev != NULL)
	{
		top_node->n = top_node->prev->n;
		top_node = top_node->prev;
	}
	top_node->n = lx;
}
