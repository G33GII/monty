#include "monty.h"
/**
 * 
 * 
*/
void execute(void)
{
    char *opcode;
    char *delim = " \n\t\r"; 
    int a = 0;

    opcode = strtok(data.line, delim);

    instruction_t inst[] =
    {
        {"push", op_push},
        {"pall", op_pall},
        {NULL, NULL}
    };
    for (a = 0; inst[a].opcode!= NULL; a++)
    {
        if (_strcmp(opcode, inst[a].opcode) == 0)
        {
            op_push(&data.stack, data.line_number);
        }
        else if (_strcmp(opcode, "pall") == 0)
        {
            op_pall(&data.stack, data.line_number);
        }
        else
        {
            fprintf(stderr, "Error: unknown opcode %s\n", opcode);
            exit(EXIT_FAILURE);
        }
        opcode = strtok(NULL, delim);
    }
}