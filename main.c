#include "monty.h"

st_data ex_dt = {0, NULL};

/**
* main -
* @argc:
* @argv:
* Return: 0 on success
*/
int main(int argc, char **argv)
{
    FILE *_fp;
    char _gt;

    _ismonty_file(argv[1], argc);
    _fp = _open_file(argv[1]);
    _getline(_fp);

    
    _close_file(_fp, argv[1]);
    return (0);
}




