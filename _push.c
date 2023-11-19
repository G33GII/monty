#include "monty.h"

/**
 * _push - Function that prints all data in the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	/* NN - New Node | HP - Head Pointer */
	stack_t *NN, *HP = *stack, *TP = Em.STACKT;
	char *_v = Em.VALUE;
	(void)line_number;

	_isINT(_v); /* Makes sure the second string is an INT */

	NN = _MEMALLOC(); /* Allocates mem & fill in the data or value */
	if (HP == NULL)	/* Takes care of the first created NODE */
	{
		*stack = NN;	/* Em.STACKH = NN | Head */
		Em.STACKT = NN;	/* Em.STACKT = NN | which pointers to the tail */
		return;
	}

	if (Em.PUQU)	/* PUQU = 1 for Enqueue FIFO */
	{
		NN->next = TP;
		TP->prev = NN;
		Em.STACKT = NN;
	}
	else	/* Default = 0 STACK LIFO */
	{
		NN->prev = HP;
		HP->next = NN;
		Em.STACKH = NN;
	}

}


/**
 * _MEMALLOC - Function that prints all data in the stack
 * Return: NEW NODE Pointer
 */
stack_t *_MEMALLOC(void)
{
	stack_t *NN;	/* NN - New Node */

	NN = malloc(sizeof(stack_t));
	if (NN == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	NN->n = atoi(Em.VALUE);
	NN->next = NULL;
	NN->prev = NULL;

	return (NN);

}
