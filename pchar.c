#include "monty.h"
/**
 * _pchar - Function to print the top element of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int a;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		_EXITFAILURE();
	}
	a = (*stack)->n;

	if ((a < 0 || a > 127))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		_EXITFAILURE();
	}
	printf("%c\n", a);
}
