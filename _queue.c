#include "monty.h"

/**
 * _enqueue - Changes stack to a FIFO structure
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;

	/**
	 * PU - Push | QU - Queue
	 * Set to 1 if LIST should be Queuing style FIFO
	 * ELSE 0 by default STACK - LIFO
	 */
	Em.PUQU = 1;
}
