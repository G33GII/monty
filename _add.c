#include "monty.h"

/**
 * _add - Function that adds top two & result is stored in the second
 * top element of the stack, and the top element is removed, so that at the end
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;
	int _x = _LENGTHLIST();
	int _z = 0, lx = 0;

	if (_x < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		_EXITFAILURE();
	}
	lx++;
    _z = top_node->n + (top_node->prev)->n;
    _pop(&Em.STACK, Em.LN);
    (*stack)->n = _z;
}
