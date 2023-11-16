#include "monty.h"
/**
 * 
 * 
*/
void execute(void)
{
    instruction_t inst [] =
    {
        {"push", opcode_push},
        {"pall", opcode_pall},
        {NULL, NULL}
    };
    

    char *delim = " \n\t\r"; 
    int a = 0;

    data.opcode = strtok(data.line, delim);
    data.ag = strtok(NULL, delim);
    data.stack = NULL;
    

    for (a = 0; inst[a].opcode!= NULL; a++)
    {
        if (_strcmp(data.opcode, inst[a].opcode) == 0)
        {
            inst[a].f(&data.stack, data.line_number);
            return;
        }

    }
            fprintf(stderr, "L%d: unknown instruction %s\n", data.line_number, data.opcode);
            exit(EXIT_FAILURE);    
}
