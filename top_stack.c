#include "monty.h"
/**
 * 
 * 
*/
stack_t *top_stack(stack_t **stack)
{
    stack_t *current_node;

    if (stack == NULL || *stack == NULL)
    {
        return (NULL);  
    }
    current_node = *stack;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
        
    }
    return (current_node);
}