#include "monty.h"
/**
 * _sub - Function to subtract the top element of the stack from the second
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int _x = _LENGTHLIST();

	if (_x < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		_EXITFAILURE();
	}

	(*stack)->prev->n = (*stack)->prev->n - (*stack)->n;
	_pop(&Em.STACKH, Em.LN);
}
