#include "monty.h"

        /*   LN STR   FUNC  VALUE STACK */
_MONTY Em = {0, NULL, NULL, NULL, NULL};
/**
* LN - Line number
* STR - getline string
* FUNC - function name after strtok
* VALUE - Integer value after strtok
* STACK -
*/

/**
* main -
* @argc:
* @argv:
* Return: 0 on success
*/
int main(int argc, char **argv)
{
    FILE *_fp; /* fp - file pointer */

    _ismonty_file(argv[1], argc);   /* check whether the file name is a ".m" */
    _fp = _open_file(argv[1]);      /* function to fopen */
    _cpFile(_fp);


    _close_file(_fp, argv[1]);
    return (0);
}




