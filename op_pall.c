#include "monty.h"
/**
 * 
 * 
*/
void opcode_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *top_node = top_stack(stack);

    if (top_node == NULL)
    {
        return;
    }
    else
    {
        printf("%d\n", top_node->n);
        top_node = top_node->prev;
    }
}