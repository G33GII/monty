#include "monty.h"

/**
 * _rotr - opcode rotr rotates the stack to the bottom
 * @stack: Pointer to the head of the stack
 * @line_number: The current line number
 * Return: void
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *copy;

    (void)line_number;

    copy = *stack;
    if (*stack == NULL || (*stack)->next == NULL)
    {
        return;
    }
    while (copy->prev)
    {
        copy = copy->prev;
    }
    copy->prev = *stack;
    copy->next->prev = NULL;
    copy->next = NULL;
    (*stack)->next = copy;
    (*stack) = copy;
}
