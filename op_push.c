#include "monty.h"
/**
 * 
 * 
*/
void opcode_push(stack_t **stack, unsigned int line_number)
{
    int a;
    stack_t *new_node, *top_node;
   

 if (isint(data.ag) == 0)
 {
        fprintf(stderr, "L<line_number>: usage: push integer\n");
        exit(EXIT_FAILURE);
        free(data.ag);
    }
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        free(data.ag);
        exit(EXIT_FAILURE); 
    }
    new_node->n = atoi(data.ag);
    new_node->next = NULL;
    new_node->prev = NULL;

    top_node = top_stack(stack);
    if (top_node == NULL)
    {
        *stack = new_node;
    }
    else
    {
        new_node->prev = top_node;
        top_node->next = new_node;
    }
}