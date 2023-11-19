#include "monty.h"

/**
 * _rotr - opcode rotr rotates the stack to the bottom
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *H = *stack;
	stack_t *T = Em.STACKT;
	int lx = 0;

	(void) line_number;
	if (H == NULL || H->prev == NULL) /* If list empty or only one NODE */
		return;

	/* Checking if theres a second string in the rotr command "rotr GERRY" */
	if (Em.VALUE)
		return;
	/* Return if more than 1 tokenizable strings exist */

	lx = T->n;
	while (T->next != NULL)
	{
		T->n = T->next->n;
		T = T->next;
	}
	T->n = lx;
}
