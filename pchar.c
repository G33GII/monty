#include "monty.h"
/**
 * _pchar - Function to print the top element of the stack
 * @stack: stack pointer
 * @line_number: line number
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int a = (*stack)->n;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((a < 0 || a > 127))
	{
		fprintf(stderr, "L%d: can't pchar, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a);
}
