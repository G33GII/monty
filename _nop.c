#include "monty.h"

/**
 * _nop - The opcode nop doesn’t do anything.
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
