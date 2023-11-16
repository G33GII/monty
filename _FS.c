#include "monty.h"

/**
 * _FS - Function Selection
 * _rmwhitespace -
 * Return: char pointer
 */
void (*_FS(void))(stack_t **stack, unsigned int line_number)
{
    int x = 0;

    /* KF - Key Function Pair */
    instruction_t KF[] = {
        {"push", _push},
        {"pall", _pall},
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
    /*
    At this pointer no matching function call was found therefore an error message
    free(Em.FUNC);
    */
    fprintf(stderr, "L%d: unknown instruction %s\n", Em.LN, Em.FUNC);
    free(Em.STR);
    free_STACK(Em.STACK);
    _close_file(Em.FP, Em.AGV);
    exit(EXIT_FAILURE);
}
