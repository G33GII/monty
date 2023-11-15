#include "monty.h"

/**
* _exe -
* Return: void
*/
void _exe(void)
{
     /* Tokenization of each line of command */
    _strtoken();

    /* Function Selection and Call 
    _FS();
    */
    printf("%s\n%s\n", Em.FUNC, Em.VALUE);

}
