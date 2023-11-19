#include "monty.h"

/**
 * _push - Function that prints all data in the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node, *top_node;
	char *_v = Em.VALUE;
	(void)line_number;

	_isINT(_v);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(Em.VALUE);
	new_node->next = NULL;
	new_node->prev = NULL;

	top_node = *stack;
	if (top_node == NULL)
	{
		*stack = new_node;
	}
	else
	{
		new_node->prev = top_node;
		top_node->next = new_node;
		*stack = new_node;
	}
}
