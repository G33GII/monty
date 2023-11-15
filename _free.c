#include "monty.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the head of the doubly linked list
 */
void free_STACK(stack_t *head)
{
	if (head)
	{
		free_STACK(head->prev); /* Initially Prev */
		free(head);
	}
}
