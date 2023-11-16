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


    data.opcode = strtok(data.line, delim);
    data.ag = strtok(NULL, delim);
    instruction_t inst[] =
    {
        {"push", opcode_push},
        {"pall", opcode_pall},
        {NULL, NULL}
    };
    for (a = 0; inst[a].opcode!= NULL; a++)
    {
        if (_strcmp(opcode, "push") == 0)
        {
            opcode_push(&data.stack, data.line_number);
        }
        else if (_strcmp(opcode, "pall") == 0)
        {
            opcode_pall(&data.stack, data.line_number);
        }
        else
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", data.line_number, data.opcode);
            exit(EXIT_FAILURE);
        }
        opcode = strtok(NULL, delim);
    }
}