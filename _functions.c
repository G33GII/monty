#include "monty.h"

/**
* _rmwhitespace -
* Return: char pointer
*/
void (*_FS(void))(stack_t **stack, unsigned int line_number)
{
    int x = 0;

    instruction_t KF = {
        {"push", &_push},
        {"pall", &_pall},
        {NULL, NULL}
    };

    for (; KV[x].k; x++)
    {
        if (!(strcmp(KV[x].k, s)))
        {
            return (KV[x].f);
        }
    }

    return (NULL);
}
