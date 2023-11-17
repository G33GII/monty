#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack with
 *                              the top element of the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;
	int _x = _LENGTHLIST();
	int _z = 0, lx = 0;

	if (_x < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		_EXITFAILURE();
	}

	lx++;
	_z = top_node->n * (top_node->prev)->n;
	_pop(&Em.STACK, Em.LN);
	(*stack)->n = _z;
}
