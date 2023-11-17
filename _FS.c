#include "monty.h"

/**
 * _FS - Function pointer Selection
 * Return: char pointer
 */
void (*_FS(void))(stack_t **stack, unsigned int line_number)
{
    int x = 0;

    /* KF - Key Function Pair : OPCODE pair */
    instruction_t KF[] = {
        {"pop", _pop},
        {"mod", _mod},
        {"mul", _mul},
        {"nop", _nop},
        {"add", _add},
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {NULL, NULL},
    };

    for (; KF[x].k; x++)
    {
        if (!(strcmp(KF[x].k, Em.FUNC)))
        {
            KF[x].f(&Em.STACK, Em.LN);
            return (NULL);
        }
    }
    /* At this pointer no matching function name found therefore error message */
    fprintf(stderr, "L%d: unknown instruction %s\n", Em.LN, Em.FUNC);
    _EXITFAILURE();
    return (NULL);
}
