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

/**
 * _isdigit - Check whether a character in a didgit or an NOT
 * @c: The char to be checked
 * Return: 1 if digit else 0
 */
int _isINT(char *_s)
{
    int x = 0;

    if (_s == NULL)
    {
        fprintf(stderr, "L%d: usage: push integer\n", Em.LN);
        free_STACK(Em.STACK);
        free(Em.STR);
        _close_file(Em.FP, Em.AGV);
        exit(EXIT_FAILURE);
    }
    while (_s[x])
    {
        if (!isdigit(_s[x]))
        {
            fprintf(stderr, "L%d: usage: push integer\n", Em.LN);
            free_STACK(Em.STACK);
            free(Em.STR);
            _close_file(Em.FP, Em.AGV);
            exit(EXIT_FAILURE);
        }
        x++;
    }
    return (0);
}
