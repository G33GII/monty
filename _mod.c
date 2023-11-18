#include "monty.h"

/**
 * _mod - The opcode mod computes the rest of the division of the second top
 *          element of the stack by the top element of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;
	int _x = _LENGTHLIST();
	int _z = 0, lx = 0;

	if (_x < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		_EXITFAILURE();
	}
	if ((top_node->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		_EXITFAILURE();
	}

	lx++;
	_z = (top_node->prev)->n % top_node->n;
	_pop(&Em.STACKH, Em.LN);
	(*stack)->n = _z;
}
