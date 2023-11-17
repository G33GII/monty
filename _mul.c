#include "monty.h"

/**
 * _pop - Function that POP the HUD of the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (top_node == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		_EXITFAILURE();
	}
	*stack = (*stack)->prev;
	free(top_node);
}


/* 
Implement the mul opcode.

The mul opcode

The opcode mul multiplies the second top element of the stack with the top element of the stack.

Usage: mul
If the stack contains less than two elements, print the error message L<line_number>: can't mul, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
The top element of the stack contains the result
The stack is one element shorter*/