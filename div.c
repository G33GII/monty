#include "monty.h"
/**
 * _div - Function to divide the top element of the stack from the second
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int _x = _LENGTHLIST();

	if (_x < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		_EXITFAILURE();
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: can't div by 0\n", line_number);
		_EXITFAILURE();
	}

	(*stack)->prev->n = (*stack)->prev->n / (*stack)->n;
	_pop(&Em.STACK, Em.LN);
}
