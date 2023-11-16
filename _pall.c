#include "monty.h"

/**
 * _pall - Function that prints all data in the stack
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _pall(stack_t **stack, unsigned int line_number)
{
    stack_t *top_node = *stack;
    (void)line_number;

    while (top_node != NULL)
    {
        printf("%d\n", top_node->n);
        top_node = top_node->prev; /* Initially Prev */
    }
}
