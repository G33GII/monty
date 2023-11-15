#include "monty.h"

/**
 * 
 * 
*/
void _push(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node, *top_node;
    char *_s = Em.VALUE;
   /*
    int _rt = 0;
   (void)line_number;
    printf("%s\n%s\n", Em.FUNC, Em.VALUE);
   */


    while (*_s == '\0')
    {
        if (_isdigit(*_s))
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            free_STACK(Em.STACK);
            free(Em.STR);
            exit(EXIT_FAILURE);
        }
        _s++;
    }

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


#include "monty.h"

/**
 * 
 * 
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
    {
		return (1);
    }
	else
    {
		return (0);
    }
}
