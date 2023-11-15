#include "monty.h"

_MONTY Em = {0, NULL, NULL, NULL};    /* LN STR   FUNC  VALUE */

/**
* main -
* @argc:
* @argv:
* Return: 0 on success
*/
int main(int argc, char **argv)
{
    FILE *_fp;

    _ismonty_file(argv[1], argc);
    _fp = _open_file(argv[1]);
    _cpFile(_fp);


    _close_file(_fp, argv[1]);
    return (0);
}




